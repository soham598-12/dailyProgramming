#include <stdio.h>
int main() {
   int n;
    scanf("%d\n",&n);
    int a,d,an;
    scanf("%d %d",&a,&d);
    an = a+d*(n-1);
    
     if(n>=0 && an==a){
       for(int i=1; i<=n; i++){
           printf("%d ",a);
       }
    }
    else if(n>=0 && an>0){
    for(int i=a;i<=an;i=i+d){
        printf("%d ",i);
    }
    }
    else if(n>=0 && an<0){
        for(int i=a;i>=an;i=i+d){
            printf("%d ",i);
        }
    }
    return 0;
}