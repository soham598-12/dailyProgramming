// Codeforces Coins //
#include <stdio.h>
 
int main()
{
    int test;
    scanf("%d",&test);
    for(int j=1;j<=test;++j){
        long long n,k;
        scanf("%lld %lld",&n,&k);
    
    if(n%2==1 && k%2==0){
        printf("NO\n");
    } 
    else{
        printf("YES\n");
    }
}
    return 0;
}