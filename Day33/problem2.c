#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
  
     if(n>3){
         if(n%3==0){
             int a = n/3;
             printf("%d",a);
         }
         else if(n%3==1){
             int b = n+2;
             int c = b/3;
             printf("%d",c);
         }
         else if(n%3==2){
             int x = n-2;
             int y = x/3;
             printf("%d",y+1);
         }
     }
     else if(n==1){
         printf("2");
     }
     
    return 0;
}