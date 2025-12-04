#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


 float discounted(float price, float percent){
   return ( price * percent ) / 100;
 }
int main(){
    float price,percent;
    scanf("%f %f",&price,&percent);
    float res=discounted(price,percent);
    printf("The final price is: %f",price-res);
    return 0;
}
     