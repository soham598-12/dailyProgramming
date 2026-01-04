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
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n-i;++j){
            printf(" ");
          }
        for(int k=1;k<=i;++k){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
