#include <stdio.h>
int main() {

   int n;
    scanf("%d",&n);
    int count=0;
   for(int i =2*n-1;i>=3;i-=2){
       
       printf("%d ",i);
        ++count;
       if(count==n){
           break;
        }
    }
    if(n>0){
    printf("1.");
    }
    return 0;
}