#include<stdio.h>
int main(){
	int t,l,i;
	char a[100000];
	int r;
	scanf("%d",&t);
	while(t--){
		i=0;
		scanf("%s",a);
		l=strlen(a);
		l--;
		while(i<=l/2){
			r=a[i]+a[l-i]-'a'+1;
			if(r>122)
				r-=26;
			a[i]=(char)r;
			a[l-i]=(char)r;
			i++;
		}
		printf("%s\n",a);
	}
}
