#include<stdio.h>
int main()
{
	int t, a=0, b=7, n;
	scanf("%d",&t);
	while(t)
	{
		scanf("%d",&n);
		if(abs(a-n)<abs(b-n))
		{
			printf("%c\n",'A');
			a=n;
		}
		else if(abs(a-n)>abs(b-n))
		{
			printf("%c\n",'B');
			b=n;
		}
		else if(abs(a-n)==abs(b-n))
		{
			if(a<b)
			{	printf("%c\n",'A');
				a=n;
			}
			else
			{
				printf("%c\n",'B');
				b=n;
			}
		}

		t--;
	}
	return 0;
}
