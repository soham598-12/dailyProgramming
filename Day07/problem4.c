#include <stdio.h>

int main() {
int a;
    scanf("%d",&a);
if(a>0){
    if(a%100==0){
        if(a%400==0){
        printf("Yes, %d is a leap year.",a);
        }
        else{
            printf("No, %d is not a leap year.",a);
        }
    }
    else if(a%4==0){
        printf("Yes, %d is a leap year.",a);
    }
    else{
        printf("No, %d is not a leap year.",a);
    }
    
}
else {
    printf("The given year %d is Invalid year.",a);
}
    return 0;
}