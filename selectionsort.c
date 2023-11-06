#include <stdio.h>

int main() {
    int n, i, min, k, j, temp;
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements of Array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    } 
    for (j = 0; j < n - 1; j++) {
        min = j; 
        for (k = j + 1; k < n; k++) {
            if (arr[k] < arr[min]) {
                min = k;  
            }
        }
        if (min != j) {
            temp = arr[j];
            arr[j] = arr[min];
            arr[min] = temp;
        }
    }
    printf("\nSorted Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

