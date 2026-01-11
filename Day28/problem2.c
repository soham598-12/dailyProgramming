#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d",&n);
   
    int r;
    int bi=0;
    int pl =1;
    for(int q = n; q > 0;q=q/2){
         r=q%2;
         bi = bi+r*pl;
         pl=pl*10;
     }
   printf("Binary equivalent of %d: %d",n,bi);
  
    return 0;
}