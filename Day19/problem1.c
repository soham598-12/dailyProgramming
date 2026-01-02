#include <stdio.h>
int main() {

   int a,b;
    scanf("%d %d",&a,&b);
    int x=a*b;
    if(a>=0){
        if(b>0){
            for(int i=b;i<=x;i=i+b){
                    printf("%d ",i);
            }
       }
        else if(b<0){
            for(int i=b; i>=x; i=i+b){
                printf("%d ",i);
            }
    }
        
        else if(b==0){
            for(int j=1;j<=a;++j){
            printf("0 ");
            }
        }
    }
    
    return 0;
}