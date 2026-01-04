#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    long long n;
    scanf("%lld",&n);
    if(n< INT_MIN || n> INT_MAX){
        printf("Out of Range");
        return 0;
    }
    else if((n&3)==0){
        printf("Divisible");
    }
    else {
        printf("Not Divisible");
      }
    
    
    return 0;
}
