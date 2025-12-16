#include <stdio.h>

int main() {

    int n,i;
    scanf("%d %d",&n,&i);
    if ((n & (1 << i))==0){
        printf("0");
    }
    else {
       printf("1");
    }
    
}