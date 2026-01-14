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
   long long sum =0;
  
    for(int i=0;i<=n-1;++i){
        sum = sum + a[i];
    }
    
    double average = (double) sum/n;
    
    int count=0;
    for(int i=0;i<=n-1;++i){
        if(average < a[i]){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}
