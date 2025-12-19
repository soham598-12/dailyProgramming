#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    if(n%2==0){

  for(int i=-1;i<=n-1;i+=2){
     
      for(int j=-2;j>=-n;j-=2){
          i=i+2;
          printf("%d ",i);
          printf("%d ",j);
        }
      }
    }
    else {
        for(int i=-1;i<=n-1;i+=2){
        for(int j=-2;j>=-n;j-=2){
          i=i+2;
          printf("%d ",i);
          printf("%d ",j);
      }
            printf("%d",i+2);
    }
        
  }
    return 0;
}