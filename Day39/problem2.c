// Arrays_Find the First Repeating Element

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    int count = 1;
    int j;
 for(j=0;j<=n-1;++j){
    for(int i=j+1;i<=n-1;++i){
        if(a[j] == a[i]){
            count++;
            
            break;
       }
    }
     if(count == 2){
         break;
     }
}
    if(count == 2){
       printf("%d",a[j]);
    }
    else{
         printf("No Repeating Element");
    }
    
    
    return 0;
}