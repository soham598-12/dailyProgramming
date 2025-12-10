#include <stdio.h>

int main() {
    int p;
    int a;
    int b;
    int z;
    

    
    scanf("%d",&p);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&z);
    
    
    switch(p){
        case 1: printf("Player chooses the Left path.\n");
            break;
        case 2: printf("Player chooses the Middle path.\n");
            break;
        case 3: printf("Player chooses the Right path.\n");
            break;
            }
      if(p == 1){
         
          if(a==2){
              printf("Player found a bridge.\n");
              
              if(b==1){
                  printf("Player crosses the bridge safely.\n");
                  switch(z){
        case 1:printf("All that glitters is not gold, Game Over!\n");
            break;
            case 2:printf( "All your efforts were for nothing, Game Over!\n");
            break;
        case 3: printf("Congratulations!! You won the treasure.\n");
                          break;
                }
              }
              else if(b==2){
                  printf("Poor luck, Game Over!\n");
              }
          }
          else if(a==1){
        printf("Poor choice, Game Over!\n");
       }
      }  
          
        else if(p==2){
           
        if(a==582){
            printf("Player solved the puzzle.\n");
            switch(b){
            case 1:printf("All that glitters is not gold, Game Over!\n");
            break;
            case 2:printf( "All your efforts were for nothing, Game Over!\n");
            break;
            case 3: printf("Congratulations!! You won the treasure.\n");
                    break;
      }
        } 
        else {
            printf("Foolish player, Game Over!\n");
        }
        }
    else if(p==3){
        if(a==30){
            printf("Player solved the puzzle.\n");
            switch(b){
            case 1:printf("All that glitters is not gold, Game Over!\n");
            break;
            case 2:printf( "All your efforts were for nothing, Game Over!\n");
            break;
           case 3: printf("Congratulations!! You won the treasure.\n");
                    break;
      }
        }
        else {
            printf("Foolish player, Game Over!\n");
        }
    }
      
    return 0;
    }
    