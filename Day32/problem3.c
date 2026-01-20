#include <stdio.h>

// Function to rotate the array
void rotateArray(int arr[], int n, int k) {
    int brr[n];
    if(k<=n){
   for(int i=0;i<=n-k;++i){
       brr[i]=arr[i+k];
   }
    
    for(int i=0;i<=k-1;++i){
        brr[n-k+i]=arr[i];
    } 
}
    else{
    for(int i=0;i<=n-k%n;++i){
       brr[i]=arr[i+k%n];
   }

 for(int i=0;i<=k%n-1;++i){
        brr[n-k%n+i]=arr[i];
    }
}
    for(int i=0;i<=n-1;++i){
        arr[i]=brr[i];
    }
    return arr[n];

}
   
int main() {
    int n, k;
    // Reading input
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // Call the function to rotate the array
    rotateArray(arr, n, k);
    
    // Print the rotated array
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}