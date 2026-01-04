#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m;
    int j;
    int flag=0;
    scanf("%d %d",&n,&m);
    if(m==0){
        printf("%d",n);
        flag==1;
    }
    else if(n==0){
        printf("%d",m);
        flag==1;
    }
       
    if(flag==0){
    for(int i=1;i<=m && i<=n;++i){
        if(n%i==0 && m%i==0 && m!=0 && n!=0){
          j=i;
         }
     }
        if(m!=0 && n!=0){
        printf("%d",j);
        }
    }
    return 0;
}
