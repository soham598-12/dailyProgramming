#include <stdio.h>

int main() {

    int n;
    scanf("%d\n",&n);
    long long a[n];
    for(int i=0;i<=n-1;++i){
        scanf("%lld",&a[i]);
    }
    int target;
    scanf("%d",&target);
    int j;
    
    for( j=0;j<=n-1;++j){
        int flag=0;
        for(int i=j+1;i<=n-1;++i){
          if( a[j] + a[i] == target){
            printf("%lld %lld",a[j],a[i]);
              flag=1;
               break;
            }
       }
        if(flag==1){
         break;
        }
    }
    if(j==n){
        printf("-1");
    }
    return 0;
}