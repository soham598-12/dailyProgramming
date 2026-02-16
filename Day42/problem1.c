// Codeforces Array colouring //
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
        int count = 0;
        int flag=1;
        for(int i=0;i<=n-1;++i){
            if((a[i] % 2) == 1){
                count++;
            }
        }
        
        if(count%2==0 || count == 0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
        
    }
 
    return 0;
}
