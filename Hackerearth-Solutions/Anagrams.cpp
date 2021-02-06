#include<stdio.h>
int main()
{
	int t, i, j, k;
	scanf("%d",&t);
	char st1[10000], st2[10000];
	while(t)
	{	i=k=0;
		scanf("%s",st1);
		scanf("%s",st2);
		while(st1[i]!='\0')
		{	j=0;
			while(st2[j]!='\0')
			{	if(st1[i]==st2[j])
				{	k++;
					st2[j]=1;
					break;
				}
				j++;
			}
			i++;
		}
		j=0;
		while(st2[j]!=NULL)
			j++;
		printf("%d\n",i+j-2*k);
		t--;
	}
}
