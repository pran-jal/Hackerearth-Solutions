#include<stdio.h>
int main()
{
	int t,n,i,j;
	scanf("%d",&t);                               //no. of test cases
	while(t)
	{
		scanf("%d",&n);                       //no. of rows
		for(i=1; i<=n; i++)
		{
			for(j=0; j<i; j++)            // *'s before the first # of each row
				printf("%c",'*');
			for(j=1; j<=2*(n-i); j++)     // all #'s of the row 
				printf("%c",'#');
			for(j=0; j<i; j++)            // *'s after the last #
				printf("%c",'*');
			printf("\n");			
		}
		printf("\n");
		t--;
	}
}
