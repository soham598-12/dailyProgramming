#include <stdio.h>
/**
 * Finds the kth smallest element in the array by iteratively finding the next
 * minimum.
 * @param arr: The input array.
 * @param n: The number of elements in the array.
 * @param k: The order of the smallest element to find (1-indexed).
 * @return: The kth smallest element in the array.
 */
int kthSmallest(int arr[], int n, int k) {
   int sm;
  for(int i=1;i<=k;++i){
       sm = arr[0];
      for(int j=0;j<=n-1;++j){
          if(arr[j] < sm){
               sm = arr[j];
          }
      }
      for(int j=0;j<=n-1;++j){
          if(sm == arr[j]){
              arr[j] = 100101000;
          }
      }
  }
    return sm;
}

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}