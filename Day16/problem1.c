#include <stdio.h>
#include<math.h>


int main() {

       int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double r1,r2,r3,r4,x,r5;
    float d;
     d=b*b-(4.00*a*c);
    
    if(d>0){
        r1= (-b+sqrt(d))/(2.00*a);
        r2= (-b-sqrt(d))/(2.00*a);
        printf("Roots: %.2f, %.2f\n",r1,r2);
        printf("Type: Real and Distinct");
    }
    else if(d==0){
        r3= -b/(2.00*a);
        printf("Roots: %.2f, %.2f\n",r3,r3);
        printf("Type: Real and Equal");
    }
    else if(d<0){
        x =sqrt(-d);
        r4= (-b)/(2.00*a);
        r5= x/(2.00*a);
        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n",r4,r5,r4,r5);
        printf("Type: Complex");
    }
    
    return 0;
}