#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int n,di;
    scanf("%d",&n);
    int sum=0,pdt=1;
    for(;n!=0;){
        sum=sum+(n%10);
        pdt=pdt*(n%10);
        n=n/10;
     }
    printf("%d",pdt-sum);
   
    return 0;
}
