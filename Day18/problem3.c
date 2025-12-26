#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int d;
    int flag=0;
    int fl = 1;
    if(n>0){
    if(n==1){
        printf("None");
        fl=0;
    }
    for(int i=2; i<=sqrt(n);++i){
       if(n%i==0){
           printf("Composite");
            flag=1;
           break;
       }   
    }
    if(fl==1){
    if(flag==0){
        printf("Prime");
    }
    }
    }
    else{
        printf("None");
    }
    return 0;
}
