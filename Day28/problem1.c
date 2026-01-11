#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int j=0;j<=n-1;++j){
        scanf("%d",&a[j]);
      }
    int i;
    
     for(i=0;i<=n-1;++i){
         if(a[i]<0){
             a[i]=0;
             printf("%d ",a[i]);
         }
         else{
           printf("%d ",a[i]);
         }
     }
   
}