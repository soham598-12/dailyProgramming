// Codeforces Doremy's Paint 3 // 

#include <stdio.h>

int main()
{
  int test;
  scanf("%d",&test);
  for(int j=1;j<=test;++j){
     int n;
     scanf("%d",&n);
     int a[n];
     int b[2];
     for(int i=0;i<=n-1;++i){
         scanf("%d",&a[i]);
     }
     int cou = 0;
    
    for(int i=0;i<=n-1;++i){
        int count = 1;
        if(a[i] == -1) {
            continue;
        }
        for(int j = i+1;j<=n-1;++j){
            if(a[i] == a[j]){
                count++;
                a[j] = -1;
            }
        }
    if(n == count){
        printf("YES\n");
        break;
    }
   else if(n%2==0){
       if(count == n/2){
           cou++;
       }
       else{
           printf("NO\n");
           break;
       }
    }
    else if(n%2==1){
        if(count == n/2+1 || count == n/2){
            cou++;
        }
        else{
            printf("NO\n");
            break;
        }
    }
    
}
if(cou == 2){
    printf("YES\n");
}
    
     
  }

    return 0;
}
