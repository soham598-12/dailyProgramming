#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int am,x,y,z;
    scanf("%d",&am);
    x=am/500;
    y=(am-x*500)/200;
    z= (am - x*500 - y*200)/100;
    if(am>0 && am%100==0){
    for(int i=0;i<=x;++i){
        printf("500-rupee notes: %d\n",x);
        break;
    }
    for(int j=0;j<=y;++j){
        printf("200-rupee notes: %d\n",y);
        break;
    }
    for(int k=0;k<=z;++k){
        printf("100-rupee notes: %d\n",z);
        break;
    }
   }
    else{
        printf("Invalid amount");
    }
    return 0;
}
