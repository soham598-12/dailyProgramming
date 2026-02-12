// Goals of victory //
#include <stdio.h>
 
int main()
{
 int test;
 scanf("%d",&test);
 for(int j=1;j<=test;++j){
    int n;
    scanf("%d",&n);
    int a[n-1];
    int sum = 0;
    for(int i=0;i<=n-2;++i){
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("%d\n",-sum);
    
 }
 
    return 0;
}