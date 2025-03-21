#include <stdio.h>

// Глобал хувьсагчид: харьцуулалт ба шилжилтийн тоог хадгална
int comparisons = 0;  // Харьцуулалтын тоо
int swaps = 0;        // Шилжилтийн (байр солих) тоо

// Элементүүдийн утгыг солих функц
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    swaps++; // Шилжилтийн тоог нэмэгдүүлнэ
}

// **Сонголтоор эрэмбэлэх алгоритм**
void selectionSort(int arr[], int n) {
    comparisons = swaps = 0; // Тоонуудыг эхлүүлнэ

    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            swap(&arr[i], &arr[minIdx]);
        }
    }
}

// **Bubble эрэмбэлэх алгоритм**
void bubbleSort(int arr[], int n) {
    comparisons = swaps = 0; // Тоонуудыг эхлүүлнэ

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// **Оруулгаар эрэмбэлэх алгоритм**
void insertionSort(int arr[], int n) {
    comparisons = swaps = 0; // Тоонуудыг эхлүүлнэ

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0) {
            comparisons++;
            if (arr[j] > key) {
                arr[j + 1] = arr[j];
                swaps++;
            } else {
                break;
            }
            j--;
        }
        arr[j + 1] = key;
        swaps++;
    }
}

// Массив хэвлэх функц
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// **Үндсэн програм**
int main() {
    int arr1[] = {9, 7, 5, 3, 1}; // Уналтын дарааллаар эрэмбэлэгдсэн массив (хамгийн муу тохиолдол)
    int arr2[] = {9, 7, 5, 3, 1}; 
    int arr3[] = {9, 7, 5, 3, 1}; 
    int n = sizeof(arr1) / sizeof(arr1[0]);

    printf("Анхны массив:\n");
    printArray(arr1, n);

    // **Сонголтоор эрэмбэлэх**
    selectionSort(arr1, n);
    printf("\nСонголтоор эрэмбэлэх:\n");
    printArray(arr1, n);
    printf("Харьцуулалт: %d, Шилжилт: %d\n", comparisons, swaps);

    // **Bubble эрэмбэлэх**
    bubbleSort(arr2, n);
    printf("\nХөөсөрүүлэх эрэмбэлэх:\n");
    printArray(arr2, n);
    printf("Харьцуулалт: %d, Шилжилт: %d\n", comparisons, swaps);

    // **Оруулгаар эрэмбэлэх**
    insertionSort(arr3, n);
    printf("\nОруулгаар эрэмбэлэх:\n");
    printArray(arr3, n);
    printf("Харьцуулалт: %d, Шилжилт: %d\n", comparisons, swaps);

    return 0;
}
