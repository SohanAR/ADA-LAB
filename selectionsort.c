#include <stdio.h>

void selectionSort(int arr[], int size);

int main() {
    int size;
    printf("Enter the size ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}
/*Output:
Enter the size 5
Enter elements
11
21

9
8
76
Sorted array: 8 9 11 21 76*/