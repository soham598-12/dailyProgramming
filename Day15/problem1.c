#include <stdio.h>

int main() {
int n,d,m,e,b,f,t;
    scanf("%d\n%d\n%d\n%d\n%d\n%d",&b,&n,&f,&d,&m,&e);
    t=f*n+d+e+m;
    if((n>5 && n<=25 && t<=b) && ((d<b*0.3) || ((f*n)<b*0.5))){
        printf("Celebration Approved");
    }
    else if((n>25 && n<=50 && t<=b && m>0) && ((d<b*0.3) || ((f*n)<b*0.5))){
        printf("Celebration Approved");
    }
    else{
        printf("Celebration Denied");
    }
     
    return 0;
}