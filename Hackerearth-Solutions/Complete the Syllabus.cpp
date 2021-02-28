#include <stdio.h>
int main(){
	int t,w,sum=0,rem;
	scanf("%d",&t);
	int i,a[7];
	char week[7][10]={"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"};
	while(t--){
		scanf("%d",&i);
		scanf("%d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6]);
		sum=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6];
		i=i%sum;
		if(i==0)
			i=sum;
		i-=a[0];
		if(i<=0)w=0;
		else{
			i-=a[1];
			if(i<=0)w=1;
			else{
				i-=a[2];
				if(i<=0)w=2;
				else{
					i-=a[3];
					if(i<=0)w=3;
					else{
						i-=a[4];
						if(i<=0)w=4;
						else{
							i-=a[5];
							if(i<=0)w=5;
							else{
							i-=a[6];
							if(i<=0)w=6;
						}
						}
					}
				}
			}
		}
		printf("%s\n",week[w]);
	}
	return 0;
}
