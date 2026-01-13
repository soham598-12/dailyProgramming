#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
     }
    if(n==1){
        printf("Sorted");
    }
    int flag=1;
    for(int i=0;i<=n-2;++i){
        if(a[i] <= a[i+1]){
            flag=0;
        }
        else{
          printf("Not Sorted");
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Sorted");
    }
    return 0;
}
