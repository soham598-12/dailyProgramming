#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int size;
    scanf("%d",&size);
    if(size>0){
       int a[size];
    
    long long sum=0;
    for(int i=0;i<=size-1;++i){
        scanf("%d",&a[i]);
    } 
     for(int j=0;j<=size-1;++j){
             sum+=a[j];
        }
    printf("%lld",sum);
    
    }
    return 0;
}
