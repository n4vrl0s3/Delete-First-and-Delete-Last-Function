#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk menghapus elemen pertama pada array
void deleteFirst(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        arr[i] = arr[i+1];
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Array sebelum delete: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    deleteFirst(arr, n);

    printf("\nArray setelah delete: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}