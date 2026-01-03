#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
    scanf("%d",&n);
    if(n>0){
        int a= n%10;
        int b= (n/10)%10;
        int c= (n/100)%10;
        int d= n/1000;  
        int x= a+b+c+d;
        for(int i=1;i<=n;++i){
            if(n%x==0){
                printf("%d is a harshad number",n);
                break;
            }
            else{
                printf("%d is not a harshad number",n);
                break;
            }
        }
            
    }
    return 0;
}
