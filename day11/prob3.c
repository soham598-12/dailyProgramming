#include <stdio.h>

int main() {
   int n,p=1;
    scanf("%d",&n);
    for(int i=2;n!=p && i<=14;++i){
        p=i*i;
    }
    
   if(n==21 || n==22 || n==33 || n==77 || n==35 || n==55){
        printf("B");
    }
   else if(n%6==0 && n%5!=0){
        printf("A");
    }
    else if((n%3==0 || n%7==0) && n%21!=0 && n>9 && n<100){
        printf("C");
    }
   else if(n==p){
       printf("D");
   }
    else {
        printf("E");
    }
    return 0;
}