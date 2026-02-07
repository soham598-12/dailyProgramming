//problem Codeforces A.Game with Integers

#include <stdio.h>
 
int main()
{
   int test;
   scanf("%d",&test);
   for(int i=1;i<=test;++i){
   int n;
   scanf("%d",&n);
   if(n%3==0){
       printf("Second\n");
   }
   else{
       printf("First\n");
   }
  }
   return 0;
}
