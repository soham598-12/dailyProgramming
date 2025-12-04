#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,m;
    scanf("%d %d",&n,&m);
    int h=n%10;
    int k=m%10;
    if(h==k){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
