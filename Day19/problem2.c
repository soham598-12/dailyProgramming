#include <stdio.h>

int main() {
    int n,x;
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
  if(i%3==0){
        ++n;
            continue;
        }
        x=i*i;
        printf("%d ",x);
    }
     
    
}