#include <stdio.h>

// Bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("--- Sorting Algorithms ---\n");
    
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Original array: ");
    printArray(arr1, n);
    
    // Bubble sort
    int arr2[7];
    for (int i = 0; i < n; i++) arr2[i] = arr1[i];
    bubbleSort(arr2, n);
    printf("Bubble sorted: ");
    printArray(arr2, n);
    
    // Selection sort
    int arr3[7];
    for (int i = 0; i < n; i++) arr3[i] = arr1[i];
    selectionSort(arr3, n);
    printf("Selection sorted: ");
    printArray(arr3, n);
    
    // Insertion sort
    int arr4[7];
    for (int i = 0; i < n; i++) arr4[i] = arr1[i];
    insertionSort(arr4, n);
    printf("Insertion sorted: ");
    printArray(arr4, n);
    
    return 0;
}
