#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int evenSum = 0, oddSum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    printf("Even Sum = %d ", evenSum);
    printf("Odd Sum = %d", oddSum);

    return 0;