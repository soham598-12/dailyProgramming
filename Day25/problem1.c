#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<=n-1;++i){
        scanf("%d ",&a[i]);
     }
    
    
    int min = a[0];
    for(int j=0;j<=n-1;++j){
        if(min > a[j]){
            min=a[j];
        }  
     }
    
    int b[n-1];
       
    int k=0;
    for(int i=0;i<=n-1;i++){
        if(a[i]!=min){
            b[k++]=a[i];
         }
    }
    if(k==0){
        printf("-1");
        return 0;
    }
    
    int mi = b[0];
    
    for(int i=0;i<=n-2;++i){
        if(mi > b[i]){
            mi =b[i];
        }
    }
    printf("%d",mi);
    
       return 0;
   }