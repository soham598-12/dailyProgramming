#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int toSeconds(int hours,int minutes,int seconds ){
    return hours*60*60 + minutes*60 + seconds;
}

int main() {
    int hours,minutes,seconds;
    scanf("%d %d %d",&hours,&minutes, &seconds);
    int res=toSeconds(hours,minutes,seconds);
    printf("Total seconds: %d",res);
    return 0;
}
