#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int x;
    for(x=1;(m*x)%n!=0;x++);
    printf("%d",m*x);
    return 0;
}
