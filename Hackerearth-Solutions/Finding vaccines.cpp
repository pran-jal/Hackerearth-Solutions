#include <stdio.h>
int main(){
	int n,m,l_i,l_i_p,k=0;
	int G=0,C=0,c_i,g_i,I_p=0;
	long I=0;
	int line=0,i=0;
	scanf("%d",&n);
	scanf("%d",&m);
	char pvirus[m];
	scanf("%s",pvirus);
	while(pvirus[i]!='\0'){
		if(pvirus[i]=='G')
			G++;
		else if(pvirus[i]=='C')
			C++;
		i++;
	}
	i=0;
	while(k<n){
		scanf("%d",&l_i);
		char vvirus[l_i];
		scanf("%s",vvirus);
		g_i=0;
		c_i=0;
		while(vvirus[i]!='\0'){
			if(vvirus[i]=='G')
				g_i++;
			else if(vvirus[i]=='C')
				c_i++;
			i++;
		}
		i=0;
		I=G*c_i+C*g_i;
		if(I>I_p){
			I_p=I;
			l_i_p=l_i;
			line=k+1;
		}
		else if(I==I_p){
			if(l_i_p>l_i){
				l_i_p=l_i;
				line=k+1;
			}
		}
		k++;
	}
	printf("%d",line);
	return 0;
}
