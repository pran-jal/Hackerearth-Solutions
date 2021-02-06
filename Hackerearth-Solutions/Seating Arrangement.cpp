#include<stdio.h>
int main()
{
	int t, stno;
	int r,q,temp;
	scanf("%d",&t);
	while(t)
	{	char *ch;
		scanf("%d",&stno);
		r=stno%12;
		q=stno/12;
		if(r==0)
		{	r=12;
			q--;
		}
		printf("%d",12*q+13-r);
		temp=r;
		r=temp%3;
		q=temp/3;
		if(r!=2)
		{
			if(q==1 || q==3)
				r=0;
			else 
				r=1;
		}
		if(r==0)
			ch="AS";
		else if(r==1)
			ch="WS";
		else
			ch="MS";
		printf(" %s\n",ch);
		t--;
	}
}
