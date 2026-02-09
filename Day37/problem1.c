// codeforces How much does daytona cost 

#include <stdio.h>
 
int main()
{
    int test;
    scanf("%d",&test);
    
    for(int j=1;j<=test;++j){
      int n,k;
      scanf("%d %d",&n,&k);
      int a[n];
      for(int i=0;i<=n-1;++i){
          scanf("%d",&a[i]);
      }
      int flag=1;
      for(int i=0;i<=n-1;++i){
          if(a[i] == k){
              flag=0;
              break;
          }
      }
      if(flag==0){
          printf("Yes\n");
      }
      else{
          printf("No\n");
      }
    }
    return 0;
}