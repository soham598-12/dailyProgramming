// Codeforces Desorting //
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
      int issort = 1;
       for(int i=0;i<=n-2;++i){
           if(a[i] > a[i+1]){
              issort = 0;
              printf("0\n");
              break;
           }
       }
       if(issort == 1){
       int diff = a[1] - a[0];
       for(int i=1;i<=n-2;++i){
          if(diff > (a[i+1] - a[i])){
              diff = a[i+1] - a[i];
          }
       }
       printf("%d\n",diff/2+1);
       }
  }
 
    return 0;
}