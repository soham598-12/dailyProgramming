#include <stdio.h>
#include<math.h>

int main() {

    int n;
    scanf("%d",&n);
    
    int i,x;
    if(n>0){
        printf("<");
    for(int i=0;i<=n-2;i++){
         int x=pow(2,i);
        printf("%d ",x);
    }
    int y=pow(2,n-1);
    printf("%d",y);
    printf(">");
    }
    
    return 0;
}