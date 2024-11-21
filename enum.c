#include <stdio.h>


void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int array[100], i, n;

    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element no. %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    bubbleSort(array, n);

    return 0;
}
