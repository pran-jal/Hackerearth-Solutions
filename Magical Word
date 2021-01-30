#include<stdio.h>
#include<ctype.h>
int ascii(char i)
{	
	if(i<=69)
		i=67;
	else if(70<=i && i<=72)
		i=71;
	else if(73<=i && i<=76)
		i=73;
	else if(77<=i && i<=81)
		i=79;
	else if(82<=i && i<=86)
		i=83;
	else if(87<=i && i<=93)
		i=89;
	else if(94<=i && i<=99)
		i=97;
	else if(100<=i && i<=102)
		i=101;
	else if(103<=i && i<=105)
		i=103;
	else if(106<=i && i<=108)
		i=107;
	else if(109<=i && i<=111)
		i=109;
	else if(112<=i)
		i=113;
	return i;
}
int main()
{
	int t, n, i;
	char c[500];
	scanf("%d",&t);
	while(t)
	{
		scanf("%d",&n);
		scanf("%s",c);
		for(i=0; i<n; i++)
		{
			c[i]=ascii(c[i]);
		}
		printf("%s\n",c);
		t--;
	}
}
