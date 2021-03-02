#include<stdio.h>
#include<string.h>
int main(){
	char a[99], b[99],ans[100],r;
	int carry=0, i=0,as=0,bs=0;
	while(scanf("%s %s",a,b)>0){
		as=strlen(a);
		bs=strlen(b);
		i=(as>bs)?as:bs;
		ans[i]='\0';
		while(i>0){
			if(as>0 && bs>0)
				r=a[--as]+b[--bs]-'0'-'0'+carry;
			else
				break;
			if(r>9){
				r=r-10;
				carry=1;
			}
			else
				carry=0;
			ans[--i]=(r+'0');
		}
		if(as>0){
		  while(as>0){
			  r=a[--as]+carry-'0';
			  if(r>9){
				  r-=10;
				  carry=1;
			  }
			  else
			  	carry=0;
		  	ans[--i]=r+'0';
	  	}
		}
		else if(bs>0){
			while(bs>0){
				r=b[--bs]+carry-'0';
				if(r>9){
					r-=10;
					carry=1;
				}
				else
					carry=0;
				ans[--i]=r+'0';
			}		
		}	
		printf("%s\n",ans);
	}
  return 0;
}
