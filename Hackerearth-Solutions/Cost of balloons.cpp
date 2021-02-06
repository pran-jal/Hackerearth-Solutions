#include<stdio.h>
int main()
{
	int t, green, purple, parti,sum1, sum2, i, j;
	scanf("%d",&t);
	while(t)
	{	sum1=sum2=0;
		scanf("%d",&green);
		scanf("%d",&purple);
		scanf("%d",&parti);
		int arr[parti][2];
		{	for(i=0; i<parti; i++)
			{	for(j=0; j<2; j++)
				{	scanf("%d",&arr[i][j]);
					if(arr[i][j]==1)
					{	if(j==0)
						{	sum1+=green;
							sum2+=purple;
						}
						else
						{	sum1+=purple;
							sum2+=green;
						}
					}
				}
			}
		}
		sum1<sum2?printf("%d\n",sum1):printf("%d",sum2);
		t--;
	}
	return 0;
}
