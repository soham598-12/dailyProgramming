#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
   for(int i=0;i<=n-1;++i){
    scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<=n-1;++i){
        if(a[i] > x){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
