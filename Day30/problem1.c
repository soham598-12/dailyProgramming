#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n-1];
    for(int i=0;i<=n-2;++i){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;++i){
        int f = 0;
        for(int j=0;j<=n-2;++j){
            if(a[j]==i){
                f =1;
                break;
            }
        }
        if(f==0){
            printf("%d",i);
            break;
        }
    }
    return 0;
}