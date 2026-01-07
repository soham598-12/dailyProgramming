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

  int min=a[0];
    for(int j=0;j<=n-1;++j){
        if(a[j] < min){
            min=a[j];
        }
    }
    printf("%d",min);
    return 0;
}
