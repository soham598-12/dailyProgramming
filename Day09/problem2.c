#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int a;
    
    
    scanf("%d",&a);
    if(a<90){
        printf("Acute Angle");
    }
    else if(a==90){
        printf("Right Angle");
    }
    else if(a<180){
        printf("Obtuse Angle");
    }
    else if(a==180){
        printf("Straight Angle");
    }
    else if(a<360){
        printf("Reflex Angle");
    }   
    else if(a==360){
        printf("Full Rotation");
    }
    if(a>360){
        if(a%360==0){
        printf("Full Rotation");
        }
        else if(a%360<90){
        printf("Acute Angle");
    }
    else if(a%360==90){
        printf("Right Angle");
    }
    else if(a%360<180){
        printf("Obtuse Angle");
    }
   else if(a%360==180){
        printf("Straight Angle");
    }
    else if(a%360>180){
        printf("Reflex Angle");
    }
    
}
    
    return 0;
}
