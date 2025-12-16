#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int y,i;
    char br;
    scanf("%d %c",&y,&br);
    
    switch(y){
        case 1: printf("Physics\nChemistry\nMaths");
            break;
            case 2: switch(br){
                case 'C' : printf("C Programming\nComputer Organization & Architecture\nWeb Development");
                    break;
                case 'E': printf("Signal Processing\nLogic Design\nNetwork Analysis");
                      break;
                case 'M': printf("Thermodynamics\nSolid Mechanics\nHeat Transfer");
                       break;
                default:printf("-1") ;
                       break;
            }
             break;
        case 3: switch(br){
            case 'C': printf("Object-oriented Programming\nDBMS\nData Structures & Algorithms");
                 break;
            case 'E': printf("Analog Electronics\nEmbedded Systems\nMicrocontrollers");
                 break;
            case 'M': printf("Applied Mechanics\nKinematics\nMechatronics");
                 break;
            default:printf("-1") ;
                 break;
        }
             break;
        case 4: 
                scanf("%d",&i);
             
             switch(i){
                 case 1:printf("Enrolled into Internship Program");
                        break;
             
                 case 0:
                switch(br){
                    case 'C': printf("Operating Systems\nComputer Networks\nCompiler Design");
                         break;
                    case 'E': printf("VLSI Design\nFiber-optic Communication\nDigital Electronics");
                         break;
                    case 'M': printf("Mechanism of Materials (MOM)\nStrength of Materials (SOM)\nMachine Design");
                         break;
                    default:printf("-1") ;
                         break;
                        
                }
                break;
                 default:printf("-1") ;
                         break;
                
             }
            
            break;
            default:printf("-1") ;
                         break;
    }   
    return 0;
}
