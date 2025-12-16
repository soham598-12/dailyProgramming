#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,a,b,c,d;
    scanf("%d",&n);
    a= n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000);
    if(a>=b && a>=c && a>=d){
    if( b>=c && b>=d && c>=d){
        printf("%d%d%d%d",a,b,c,d);
    }
    else if( b>=c && b>=d && d>=c){
        printf("%d%d%d%d",a,b,d,c);
    }
    else if( c>=b && c>=d && b>=d){
        printf("%d%d%d%d",a,c,b,d);
    }
    else if(c>=b && c>=d && d>=b){
        printf("%d%d%d%d",a,c,d,b);
    }
    else if( d>=c && d>=b && c>=b){
        printf("%d%d%d%d",a,d,c,b);
    }
    else if( d>=c && d>=b && b>=c){
        printf("%d%d%d%d",a,d,b,c);
    }
    }
   else if(b>=a && b>=c && b>=d){
       
    if( a>=c && a>=d && c>=d){
           printf("%d%d%d%d",b,a,c,d);
       }
    else if( a>=c && a>=d && d>=c){
           printf("%d%d%d%d",b,a,d,c);
       }
    else if( c>=d && c>=a && a>=d){
         printf("%d%d%d%d",b,c,a,d);
    }
    else if( c>=d && c>=a && d>=a){
         printf("%d%d%d%d",b,c,d,a);
    }
    else if( d>=c && d>=a && a>=c){
         printf("%d%d%d%d",b,d,a,c);
    }
    else if(d>=c && d>=a && c>=a){
         printf("%d%d%d%d",b,d,c,a);
    }
   }
    else if(c>=a && c>=b && c>=d){
        
        if(a>=b && a>=d && b>=d){
            printf("%d%d%d%d",c,a,b,d);
         }
       else if(a>=b && a>=d && d>=b){
            printf("%d%d%d%d",c,a,d,b);
        }
        else if(b>=a && b>=d && a>=d){
            printf("%d%d%d%d",c,b,a,d);
        }
        else if(b>=a && b>=d && d>=a){
            printf("%d%d%d%d",c,b,d,a);
        }
        else if(d>=a && d>=b && a>=b){
            printf("%d%d%d%d",c,d,a,b);
        }
        else if(d>=a && d>=b && b>=a){
            printf("%d%d%d%d",c,d,b,a);
        }    
    }
    
    else if(d>=a && d>=b && d>=c){
        
        if(a>=b && a>=c && b>=c){
            printf("%d%d%d%d",d,a,b,c);
        }
       else if(a>=b && a>=c && c>=b){
            printf("%d%d%d%d",d,a,b,c);
        }
        else if(b>=a && b>=c && c>=a){
            printf("%d%d%d%d",d,b,c,a);
        }
        else if(b>=a && b>=c && a>=c){
            printf("%d%d%d%d",d,b,a,c);
        }
        else if(c>=a && c>=b && a>=b){
            printf("%d%d%d%d",d,c,a,b);
        }
        else if(c>=a && c>=b && b>=a){
            printf("%d%d%d%d",d,c,b,a);
        }
    }
 
    return 0;
}
