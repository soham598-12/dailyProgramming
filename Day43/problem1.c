// codeforces Twin permutations //
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
    int b[n];
    for(int i=0;i<=n-1;++i){
        b[i] = n+1-a[i];
    }
    for(int i=0;i<=n-1;++i){
        printf("%d ",b[i]);
    }
    printf("\n");
    
}
    return 0;
}