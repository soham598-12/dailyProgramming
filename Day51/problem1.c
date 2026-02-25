// Codeforces Halloumi boxes //
#include <stdio.h>

int main()
{
  int test;
  scanf("%d",&test);
  for(int j=1;j<=test;++j){
    int n,k;
    scanf("%d %d",&n,&k);
      int a[n];
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    int flag=0;
    int z;
    for(z=0;z<=n-2;++z){
        if(a[z] <= a[z+1]){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(n==1){
        printf("YES\n");
    }
    else if((flag==1 &&  k==1) || k!=1){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
  }
    return 0;
}
