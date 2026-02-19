// Codeforces Walking Master // 
#include <stdio.h>
 
int main()
{
    int test;
    scanf("%d",&test);
 
    for(int j=1;j<=test;++j){
 
        long long a,b,c,d;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
 
        long long count = 0;
 
        if(b > d){
            printf("-1\n");
            continue;   
        }
 
        while(b < d){
            count++;
            b++;
            a++;
        }
 
        if(a < c){
            printf("-1\n");
            continue;   
        }
 
        while(a > c){
            count++;
            a--;
        }
 
        printf("%lld\n",count);
    }
 
    return 0;
}