#include <stdio.h>

int main() {
    int n,x;
    double ml,st,min;
    scanf("%d %d",&x,&n);
    st=x*0.4;
    min=x;
    ml=x;
     for(int i=1;i<=n;++i){
         if(i%6==0){
             ml*=1.7;
             i+=6;
         }
             
         else if(i%3==0){
             ml*=0.8;
         }
             
         else if(i%2==0){
             ml*=7.0/8;
         }
             
         else{
             ml*=0.9;  
         }
         if(ml<min){
             min=ml;
         }
         
         if(st>ml && n!=28){
             printf("Stopped early after %d days: %.2lf\n",i,ml);
             printf("Minimum amount held by Bhaskar: %.2lf\n",min);
             printf("Better Luck Next Time!");
             return 0;
         } 
     }
    
     printf("After %d days: %.2lf\n",n,ml);
     printf("Minimum amount held by Bhaskar: %.2lf\n",min);
    
     if((x*0.7) <= ml){
        printf("Lucky Bhaskar");
    }
    else {
        printf("Better Luck Next Time!");
    }
    
    return 0;
}