#include <stdio.h>

int main() {
    int n;
    float a;
    int flag= 0;
    scanf("%d",&n);

    if(n>=0){
        if(n>=0 && n<=100){
           a=(n*5)-(n*5*.1);

        }
        else if(n>100 && n<=300){
             a= (100*5 + (n-100)*7);
            
             if( a<=1200.00){
             a=a-a*0.1;
             } 
        }
        else if(n>300){
            a= 100*5 + 200*7 + (n-300)*10;
        }
        
    }
    else {
        printf("Invalid Input!");
        flag = 1;
    }
    
    if(flag==0){
        printf("The electricity bill is: %.2f.",a);
    }
    return 0;
    }