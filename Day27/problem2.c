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
    int flag=0;
    for(int i=n-1;i>=0;--i){
        if(a[i]==x){
            printf("%d",i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("-1");
    }
    
    return 0;
}
