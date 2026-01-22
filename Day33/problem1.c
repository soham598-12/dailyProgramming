#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int j=1;j<=x;++j){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<=n-1;++i){
       scanf("%d",&a[i]);
   }
   int max=a[0];
   for(int i=1;i<=n-1;++i){
       if(a[i] > max){
          max=a[i];
       }
   }
   long long maxi = max*n;
       printf("%lld\n",maxi);
}
    return 0;
}