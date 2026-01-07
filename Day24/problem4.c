#include <stdio.h>

int main() {

   int n;
    scanf("%d",&n);
    int a[n];
    int evecount=0;
    int oddcount=0;
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            evecount++;
        }
        else{
            oddcount++;
        }
     }
    printf("%d %d",evecount,oddcount);
    
    return 0;
}