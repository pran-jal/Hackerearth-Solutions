#include<stdio.h>
#include<string.h>
int main(){
	char a[101];
	scanf("%s",a);
	int i=0,j,r=0,flag=1;
	j=strlen(a);
	while(i<j){
		r=a[i]+a[i+1]+a[i+2]+a[i+3]+a[i+4]+a[i+5]-6*'0';
		if(r==0 || r==6){
			printf("Sorry, sorry!");
			flag=0;
			break;
		}
		else
			i++;
	}
	if(flag)
		printf("Good luck!");
}
