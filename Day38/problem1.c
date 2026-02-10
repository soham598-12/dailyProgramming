// codeforces Ambitious Kid

#include <stdio.h>
 
int main()
 {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
     
    for(int i=0;i<=n-1;++i){
        if(a[i] < 0){
          a[i] = (-a[i]); 
        }
    }
    
    int min = a[0];
    for(int i=0;i<=n-1;++i){
        if(a[i] < min){
            min = a[i];
        }
    }
    if(min<=0){
        printf("%d", -min);
    }
    else{
        printf("%d",min);
    }
return 0;
}