// Codeforces Everybody Likes Good Arrays!, // 

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
           scanf("%d ",&a[i]);
       }
       int count = 0;
       for(int i=0;i<=n-2;++i){
           if(a[i]%2==0 && a[i+1]%2==0){
             count++;
           }
           else if(a[i]%2!=0 && a[i+1]%2!=0){
             count++;
           }
       }
       printf("%d\n",count);
   }
    return 0;
}