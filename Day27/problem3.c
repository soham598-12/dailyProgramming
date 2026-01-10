#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int count=0;
    for(int i=0;i<=n-1;++i){
        if(a[i]==m){
            count++;
        }
    }
    printf("%d",count);
    
    
    return 0;
}