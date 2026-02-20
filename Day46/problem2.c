// Codeforces Digits summation //
#include <stdio.h>

int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   int res = a%10;
   int res1 = b%10;
   int result = res + res1;
   printf("%d",result);
   return 0;
}
