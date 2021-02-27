#include <stdio.h>
int main(){
	int t;
	long min,max,l,r,s,temp;
	scanf("%d",&t);
	while(t--){
		temp=0;
		min=0;
		max=0;
		scanf("%ld %ld %ld",&l,&r,&s);
		if(s>r || l>r)
			printf("-1 -1\n");
		else{
			min=l/s;
			max=r/s;
			if(min*s<l)
				min++;
			if(min*s>r)
				printf("-1 -1\n");
			else if(max*s<l)
				printf("-1 -1\n");
			else
				printf("%ld %ld\n",min,max);
		}
	}
	return 0;
}
