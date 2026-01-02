#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>0){
     for(int i=n; i>=1 ;i++)
          {
         if(n==2){
             printf("%d -> ",n);
             printf("1");
             break;
         }
         else if(n==1){
             printf("%d",n);
             break;
         }
         
      else if(n%2==0 && n!=i) {
            printf("%d -> ",n);
            n = n/2;
         }
         
         if(n%2!=0){
             printf("%d -> ",n);
              n= 3*n + 1;
             
         }
     }
    } 
   return 0;
}