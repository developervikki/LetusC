//Implementation the insertion sort in c language..
#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++) {
        k = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = k;
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

