#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    int res=n&1;
    if(res==1){
        printf("Odd");
    }
    else{
        printf("Even");
    }
}