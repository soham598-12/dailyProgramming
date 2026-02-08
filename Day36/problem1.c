#include <stdio.h>
 
int main()
{
    int test;
    scanf("%d",&test);
    for(int j=1;j<=test;++j){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<=n-1;++i){
            scanf("%d",&a[i]);
        }
        int flag=1;
        for(int i=1;i<=n-2;++i){
            if((a[i] > a[i-1]) && (a[i] > a[i+1])){
               int temp = a[i];
               a[i] = a[i+1];
               a[i+1] = temp;
               i=0;
            }
        }
        for(int i=0;i<=n-2;++i){
           if(a[i] > a[i+1]){
               flag=0;
           }
        }
        if(flag==0){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }
 
    return 0;
}