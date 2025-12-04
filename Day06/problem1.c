#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int buildNumber(int a,int b, int c,int d){
    return (a*1000 + b*100 + c*10 +d)*5;
}

int main() {
int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int res=buildNumber(a,b,c,d);
    printf("The number is: %d",res);
   
    return 0;
}
