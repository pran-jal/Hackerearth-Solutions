#include<stdio.h>
int main()
{
	int t,n,i,j;
	scanf("%d",&t);
	while(t)
	{
		scanf("%d",&n);
		for(i=1; i<=n; i++)
		{
			for(j=0; j<i; j++)
				printf("%c",'*');
			for(j=1; j<=2*(n-i); j++)
				printf("%c",'#');
			for(j=0; j<i; j++)
				printf("%c",'*');
			printf("\n");			
		}
		printf("\n");
		t--;
	}
}
