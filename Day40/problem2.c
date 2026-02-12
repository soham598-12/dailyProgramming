// Arrays_Find the Majority Element//

#include <stdio.h>

int main() {

   int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    
    int j;
  for(j=0;j<=n-1;++j){
    int count = 1;
    for(int i=j+1;i<=n-1;++i){
        if(a[j] == a[i] ){
            count++;
        }
     }
    if(count > (n/2)){
        printf("%d",a[j]);
        break;
    }
}
    if(j==n){
        printf("No Majority Element");
    }
    
    return 0;
}