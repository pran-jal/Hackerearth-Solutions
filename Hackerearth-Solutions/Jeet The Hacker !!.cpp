#include <stdio.h>
int main(){
	long n,i,sum=1,sum1=1;
	scanf("%ld",&n);
	if(n%2==0){
		for(i=1; i<n; i++){
			sum+=n+1;
			sum1+=sum;
		}
		printf("%ld\n",sum1);
	}
	else{
		for(i=2; i<=n; i++)
			sum+=i+i*n;
		printf("%ld\n",sum);
	}
	return 0;
}
