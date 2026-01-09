#include <stdio.h>

int main() {

   int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    int ele;
    scanf("%d",&ele);
    int flag=1;
    for(int i=0;i<=n-1;++i){
        if(ele==a[i]){
            printf("%d",i);
            flag=0;
              break;
        }
    }
    if(flag==1){
        printf("-1");
    }
    
    return 0;
}