#include <stdio.h>

int main() {

    float n,t;
    scanf("%f",&n);
    if(n>=0.00){
        if(n<=250000.00){
           t=0.00;
         printf("%.2f",t);
        }
        else if(n>250000 && n<=500000){
            t=(n-250000)*5.00/100;
            printf("%.2f",t);
        }
        else if(n>500000 && n<=1000000){
             t=(250000.00*.05 + (n-500000.00)*.2);
            printf("%.2f",t);
        }
        else if(n>1000000){
            t=250000.00*5.00/100 + 500000.00*20.00/100 + (n-1000000.00)*30.00/100;
            printf("%.2f",t);
        }
    }
    else{
        printf("INVALID");
    }
    
    return 0;
}