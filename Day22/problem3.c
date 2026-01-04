#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
    scanf("%d",&n);
    if(n<=100 && n>=-100){
    if(n<0){
        printf("Freezing");
     }
    else if(n>=0 && n<=30){
        printf("Normal");
    }
    else if(n>30){
        printf("Hot");
    }
    }
    return 0;
}
