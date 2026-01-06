#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d",&n);
    
    int j;
    
    int count=0;
    for(int i=2;;++i){
       int prime=1;    
        for(j=2;j<=i/2;++j){
            if(i%j == 0){
                prime=0;
                break;
            }
        }
        if(prime==1){
           count++;
        }
        if(count==n){
            printf("%d",i);
            break;
        }
    }
    return 0;
}