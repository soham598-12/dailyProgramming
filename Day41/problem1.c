// Codeforces Buttons //

#include <stdio.h>
 
int main()
{
  int test;
  scanf("%d",&test);
  for(int j=1;j<=test;++j){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b){
        if(c%2==0){
            printf("Second\n");
        }
        else{
            printf("First\n");
        }
    }
    else if(b>a){
        printf("Second\n");
    }
    else{
        printf("First\n");
    }
    
  }
 
    return 0;
}
