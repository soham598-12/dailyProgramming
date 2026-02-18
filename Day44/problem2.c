// hackerrank Arrays_Check Special Product vs Sum Condition // 

#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    for(int i = 0; i < N; i++) {
        if(arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < second_smallest) {
            second_smallest = arr[i];
        }
    }
    
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for(int i = 0; i < N; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }
    int min,max = arr[0];
    for(int i=0;i<=N-1;++i){
        if(arr[i] < max){
            max = arr[i];
        }
        else{
            min = arr[i];
        }
    }
    if((second_largest * smallest) > (second_smallest + largest)){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}