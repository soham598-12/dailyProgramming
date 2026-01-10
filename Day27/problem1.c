#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<=m-1;++i){
        scanf("%d",&b[i]);
    }
    int flag=1;
    if(m==n){
    for(int i=0;i<=n-1;++i){
        if(a[i]!=b[i]){
            flag=0;
            printf("Not Equal");
            break;
        }
    }
    if(flag==1){
        printf("Equal");
    }
    }
    else{
        printf("Not Equal");
    }

    return 0;
}
