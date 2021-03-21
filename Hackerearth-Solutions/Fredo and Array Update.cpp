#include<stdio.h>
int main(){
    long n, i, sum=0;
    
    scanf("%ld",&n);
    int a[n];
    
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    
    printf("%ld", (sum/n)+1);
    
    return 0;
}
