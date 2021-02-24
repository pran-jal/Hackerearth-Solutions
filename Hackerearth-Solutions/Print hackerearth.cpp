#include <stdio.h>
int main(){
	long n;
	scanf("%ld",&n);
	char c[n];
	scanf("%s",c);
	long r=n/11, temp,i,a[7]={0};
	int j,flag;
	if(r>0){
		for(i=0; i<n; i++){
			if(c[i]=='h')
				a[0]+=1;
			else if(c[i]=='a')
				a[1]+=1;
			else if(c[i]=='e')
				a[2]+=1;
			else if(c[i]=='r')
				a[3]+=1;
			else if(c[i]=='c')
				a[4]+=1;
			else if(c[i]=='k')
				a[5]+=1;
			else if(c[i]=='t')
				a[6]+=1;
		}
	temp=a[0];
	for(i=0; i<7; i++)
	{
		if(i<4)
			a[i]/=2;
		if(a[i]<temp)
			temp=a[i];
	}
	printf("%d",temp);
	}
	else
		printf("0");
	return 0;
}
