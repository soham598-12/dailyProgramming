// Codeforces Blank Space //
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
     int max = 0;
       int count = 0;
       for(int i =0;i<=n-1;++i){
           if(a[i] == 0){
               count++;
               if(count > max){
                   max = count;
               }
           }
           else{
               count = 0;
           }
       }
       printf("%d\n",max);
   }
    return 0;
}
