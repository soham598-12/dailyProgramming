#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a;
scanf("%d",&a);
    if(a>=0 && a<=17){
        printf("Not Eligible");
    }
    else if(a>=18){
        printf("Eligible");
    }
}
