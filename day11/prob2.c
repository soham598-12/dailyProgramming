#include <stdio.h>

int main() {

    int a,s,r;
    scanf("%d\n %d\n %d\n",&a,&s,&r);
     if(a<30){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if(s<=30000 && r<=2){
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    else if(a>=30 && a<=50 && s>=75000 && r==3){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if(a>50){
        if(s>75000 && r==3){
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        }
        else{
            printf("Low Risk Portfolio: Suitable for conservative investments."); 
        }
    }
    
   else if(a>=30 && a<=50 && r<=2){
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    return 0;
}