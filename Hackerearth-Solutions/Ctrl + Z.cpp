#include<stdio.h>
#include<string.h>
struct list{
	char s[50];
};
int main(){
	struct list list[100];
	char r[] = "Ctrl+Z";
	int i=0,t=1;
	while(gets(list[i].s)>0){
		t=strlen(list[i].s);
		if(strcmp(list[i].s,r)==0){
			if(i!=0)
				i--;
		}
		else
			i++;
	}
	if(i-1<0)
		printf("No actions in clipboard.");
	else
		printf("%s\n",list[i-1].s);
	return 0;
}
