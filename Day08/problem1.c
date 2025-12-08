#include <stdio.h>

int main() {
  int h,t;
    float c;
    int g;
   
    scanf("%d %f %d",&h,&c,&t);
    if(h>=0 && c>=0 && t>=0){
    if(h>50 && c<0.7 && t>5600){
        g=10;
        printf("The grade of the steel is: %d\n",g);
        printf("All of the conditions met.");
    }
    
   else if(h>50 && c<0.7){
        g=9;
        printf("The grade of the steel is: %d\n",g);
       printf("Two conditions met.");
    }
    else if(c<0.7 && t>5600){
        g=8;
         printf("The grade of the steel is: %d\n",g);
        printf("Two conditions met.");
    }
    else if(h>50 && t>5600){
        g=7;
         printf("The grade of the steel is: %d\n",g);
         printf("Two conditions met.");
    }
    else if(h>50 || t>5600 || c<0.7){
       g=6;
         printf("The grade of the steel is: %d\n",g);
        printf("Only one condition met.");
    }
    else if(!(h>50 && t>5600 && c<0.7)){
        g=5;
         printf("The grade of the steel is: %d\n",g);
        printf("None of the conditions met.");
    }
    }
    
    
    
    return 0;
}