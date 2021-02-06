#include<stdio.h>

int main()
{
	char s[100];
	scanf("%s",s);
	int i=0, sum=0;
	while(s[i]!=NULL)
	{
		sum=sum+s[i]-96;
		i++;
	}
	printf("%d",sum);
  return 0;
}
