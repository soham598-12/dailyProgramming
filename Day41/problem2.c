#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    int max = a[0];
    int min = a[0];
    int sum = 0;
    for(int i=0;i<=n-1;++i){
        if(a[i] > max){
            max = a[i];
        }
        else{
            min = a[i];
        }
        sum = sum + a[i];
    }
    int res = max - min;
    if(res > (sum/n)){
        printf("True");
    }
       else{
           printf("False");
       }
}
