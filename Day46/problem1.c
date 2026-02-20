// Codeforces Prepend and Append // 

#include <stdio.h>
 
int main()
{
  int test;
  scanf("%d",&test);
  for(int j=1;j<=test;++j){
      int n;
      scanf("%d",&n);
      char a[n];
      scanf("%s",a);
      int flag = 1;
      int i;
      for(i=0;i<=n-1;++i){
          if(a[i] == a[n-i-1]){
              flag = 0;
              break;
          }
      }
      if(flag==0){
          printf("%d\n",n-(2*i));
      }
      else{
          printf("0\n");
      }
      
  }
    return 0;
}