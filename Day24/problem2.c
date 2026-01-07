#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    long long sum=0;
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<=n-1;++j){
        sum=sum+a[j];
    }
    long double z=(long double)sum/n;
    printf("%llf",z);
    
    return 0;
}
