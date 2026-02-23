//Hackerrank Move zeroes to end //

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    int b[n];
for(int j=0;j<=n-1;++j){
   for(int i=0;i<=n-1;++i){
       if(a[i] != 0){
          b[j]  = a[i];
          ++j;
       }
   }
}
    int count = 0;
    for(int i=0;i<=n-1;++i){
        if(a[i] == 0){
            count++;
        }
    }
    for(int i=0;i<=count-1;++i){
        b[n-i-1] = 0; 
    }
   for(int i=0;i<=n-1;++i){
    printf("%d ",b[i]);
  }
    
    
    return 0;
}