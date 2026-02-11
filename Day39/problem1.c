//Codeforces United We stand 

#include <stdio.h>
 
int main()
{
 int test;
 scanf("%d",&test);
 for(int k=1;k<=test;++k){
    int n;
    scanf("%d",&n);
     int a[n];
     for(int i=0;i<=n-1;++i){
         scanf("%d",&a[i]);
     }
     
     int count = 1;
     for(int i=1;i<=n-1;++i){
         if(a[0] == a[i]){
           count++;
         }
     }
     if(count == n){
        printf("-1\n");
     }
     else{
     int max = a[0];
     
     for(int i=1;i<=n-1;++i){
         if(max < a[i]){
             max = a[i];
         }
     }
     int count1 =0;
     for(int i=0;i<=n-1;++i){
         if(a[i] == max){
            count1 ++;
         }
     }
     
     int b[n-1];
     int c[count1];
 
    for(int i=0,j=0;i<=n-1;){
        if(a[i] != max){
          b[j] = a[i];
          ++j;
        }
        ++i;
    }
    printf("%d %d",n-count1,count1);
    printf("\n");
    
    for(int i=0;i<=n-count1-1;++i){
      printf("%d ",b[i]);
    }
    printf("\n");
    for(int i=0;i<=count1-1;++i){
        printf("%d ",max);
    }
    printf("\n");
    
}
 }
 return 0;
}