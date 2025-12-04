#include <stdio.h>

int main() {
    int n,i;
    scanf("%d\n",&n);
    scanf("%d",&i);
    int res=n|(1<<i);
    printf("%d",res);
}