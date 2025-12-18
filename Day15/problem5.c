#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int d,m,y;
    scanf("%d %d %d",&d,&m,&y);
    if(d>0 && d<32 && m>0 && m<13 && y>0){
    if(m==2){
         if((y%400==0) || (y%400!=0 && y%100!=0 && y%4==0) || ((y%400==0) && (y%100==0))){
              if (d>0 && d<=8){
             printf("0%d-0%d-%d",d+1,m,y);
             }
             else if(d>=9 && d<29){
                 printf("%d-0%d-%d",d+1,m,y);
             }
             else if(d==29){
               printf("01-0%d-%d",m+1,y);
             }
         }
        else{
            
             if(d>0 && d<=8){
                printf("0%d-0%d-%d",d+1,m,y);
            }
            else if(d>=9 && d<28){
                 printf("%d-0%d-%d",d+1,m,y);
             }
            else if(d==28){
             printf("01-0%d-%d",m+1,y);
            }
    }
    }
   else if(m==4 || m==6 || m==9 || m==11){
        
       
            if(d>0 && d<9){
                if(m>0 && m<=9){
             printf("0%d-0%d-%d",d+1,m,y);
             }
                else if(m>=10 && m<=12){
                    printf("0%d-%d-%d",d+1,m,y);
                }
          }  
        
        else if(d>=9 && d<30){
            if(m>0 && m<=9){
                 printf("%d-0%d-%d",d+1,m,y);
             }
            else if(m>=10 && m<=12){
                 printf("%d-%d-%d",d+1,m,y);
            }
        }
        else if(d==30){
            if(m>0 && m<9){
                 printf("01-0%d-%d",m+1,y);
             } 
          else if(m>=9 && m<=11){
              printf("01-%d-%d",m+1,y);
          }
        }
       
    }
    else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        
        
            if(d>0 && d<9){
                if(m>0 && m<=9){
             printf("0%d-0%d-%d",d+1,m,y);
             }
                else if(m>=10 && m<=12){
                    printf("0%d-%d-%d",d+1,m,y);
                }
          }  
        else if(d>=9 && d<31){
            if(m>0 && m<=9){
                 printf("%d-0%d-%d",d+1,m,y);
             }
            else if(m>=10 && m<=12){
                 printf("%d-%d-%d",d+1,m,y);
            }
        }
        else if(d==31){
            if(m>0 && m<9){
                 printf("01-0%d-%d",m+1,y);
             } 
          else if(m>=9 && m<=11){
              printf("01-%d-%d",m+1,y);
          }
            else if(m==12){
                printf("01-01-%d",y+1);
            }
            
        }
    }
    
    }
   
    
     
    return 0;
}
