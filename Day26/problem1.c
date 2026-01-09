#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<=n-1;++i) {
        scanf("%d",&a[i]);
    }
    long long sum = 0;
    long long sum1 = 0;
    for(int i=0;i<=n-1;++i){
        if(i % 2==0){
            sum=sum+a[i];
        }
        else {
            sum1=sum1 + a[i];
        }
    }
    printf("%lld",sum-sum1);
    
    return 0;
}


