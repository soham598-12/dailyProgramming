#include <stdio.h>

int main() {

     int n;
    scanf("%d",&n);
   
        for(int i=1,j=1;i<=10 && j<=10;++i,++j){
            printf("%d x %d = %d\n",n,i,n*i);
          }
        
    return 0;
}