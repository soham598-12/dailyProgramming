#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    int count=0;
    
    if(n==1){
        return -1;
    }
    
    for(int i=0;i<=n-2;++i){
        if(arr[i]==arr[i+1]){
            count++;
        }
    }
    if (count==n-1){
        return -1;
    }
    
    int max=arr[0];
   for(int i=0;i<=n-1;++i){
       if(max <= arr[i]){
         max=arr[i];
       }
   }
    int arr2[n];
    
    for(int i=0;i<=n-1;++i){
        if(arr[i]==max){
            arr2[i]=-10000000001;
        }
        else{
            arr2[i]=arr[i];
         }
    }
    int ma = arr2[0];
    

    for(int i=0;i<=n-1;++i){
        if(arr2[i] >= ma){
            ma=arr2[i];
        }
    }
    return ma;
    
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr , n));
    return 0;
}