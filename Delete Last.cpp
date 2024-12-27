#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk menghapus elemen terakhir pada array
void deleteLast(int arr[], int n) {
    if(n == 0) {
        printf("Array kosong\n");
    } else {
        for(int i=n-1; i>0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = 0;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Array sebelum delete: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    deleteLast(arr, n);

    printf("\nArray setelah delete: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}