// Codeforces Extremely Round //

#include <stdio.h>

int main()
{
   int test;
   scanf("%d",&test);
   for(int j=1;j<=test;++j){
       int n;
      
       scanf("%d",&n);
        int t = n;
       int count = 0;
       while(t>0){
           count++;
           t = t/10;
       }
       t = n;
       while(t>=10){
           t = t/10;
       }
       int res = 9*(count-1) + t;
       printf("%d\n",res);
       
   }

    return 0;
}
