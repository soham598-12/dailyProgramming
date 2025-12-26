#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(((n>>31)&1)==0){
        printf("Positive");
    }
    else if(((n>>31)&1)==1){
        printf("Negative");
    }
    return 0;
}