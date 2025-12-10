#include <stdio.h>

int main() {
   int x;
    scanf("%d",&x);
    if(x>0){
        if((x>15 && x%3==0) && (x%2==0 && x>10)  && (x%7==0)){
            printf("The verdict for the number %d is: SUPERNATURAL",x);
             }   
           else if((x>15 && x%3==0) && (x%2==0 && x>10) || (x%2==0 && x>10)  && (x%7==0) || (x>15 && x%3==0) && (x%7==0))             {
                printf("The verdict for the number %d is: MIRACULOUS",x);
            }

          else if(x>10 && x%2==0  || x%3==0 && x>15 || x%7==0 ){
            printf("The verdict for the number %d is: MAGICAL",x);
        } 

        else{
            printf("The verdict for the number %d is: NORMAL",x);
        }
    }
    else{
        printf("The verdict for the number %d is: INVALID",x);
    }
    
    
    return 0;
}