#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int count=0;
    int x=n;
    for(;n!=0;){
        if(x % (n%10)==0){
            count++;
        }
        n=n/10;
    }
    printf("%d",count);
    return 0;
}
