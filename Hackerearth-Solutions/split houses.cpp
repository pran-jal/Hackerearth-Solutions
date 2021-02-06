#include<stdio.h>
int main()
{
	int n, i, count=0, flag=0;
	scanf("%d",&n);
	char c[20];
	scanf("%s",&c);
	for(i=0; i<n; i++)
	{
		if(c[i]!='H')
			c[i]='B';
		else
		{	count++;
			flag=i;
			if(c[i+1]=='H')
			{	flag=1;
				break;
			}
		}
	}
	if((count==n && count!=1) || flag==1)
		printf("%s\n","NO");
	else
	{	printf("%s\n","YES");
		printf("%s\n",c);
	}
	return 0;
}
