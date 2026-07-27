#include<stdio.h>
int main() {
    int n, i, largest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("The largest number in the series is: %d", largest);
    return 0;
}