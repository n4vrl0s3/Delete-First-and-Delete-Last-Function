# Delete First and Delete Last Function

This repository aims to provide a comprehensive starting point for understanding and implementing two fundamental list operations: deleting the first element and deleting the last element. These operations are implemented in Python and C++ and serve as a great introduction to list manipulation for beginners and intermediate programmers.

<hr><br>

## Purpose of This Repository

### Deleting the First Element

Deleting the first element of a list is a basic operation that involves removing the element at the beginning of the list and shifting all subsequent elements one position to the left. This repository provides examples of how to perform this operation efficiently in Python and C++.

### Deleting the Last Element

Deleting the last element of a list is another essential operation that involves removing the element at the end of the list. This operation is straightforward and is commonly used in various programming tasks. This repository includes examples of how to handle this operation in Python and C++.

<hr><br>

## Demonstration

Refer to the `program.py`, `Delete First.cpp`, and `Delete Last.cpp` files for complete demonstrations of the delete first and delete last functions in Python and C++.

### Python

```python
# Delete First Function

arr = [1, 2, 3, 4, 5]

print("Array before deleted:", arr)

arr.pop(0)

print("\nArray after deleted:", arr)

# Delete Last Function

arr = [1, 2, 3, 4, 5]

print("Array before deleted:", arr)

arr.pop()

print("\nArray after deleted:", arr)
```

### C++

#### Delete First.cpp

```cpp
// filepath: /home/guan/Documents/Code/Delete-First-and-Delete-Last-Function/Delete First.cpp
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
```

#### Delete Last.cpp

```cpp
// filepath: /home/guan/Documents/Code/Delete-First-and-Delete-Last-Function/Delete Last.cpp
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
```

<hr><br>

## Features

- Simple and easy-to-understand examples
- Efficient list manipulation techniques
- Suitable for beginners and intermediate programmers

## Technologies Used

- Python
- C++

## Project Setup

1. **Clone the repository:**
   ```bash
   git clone https://github.com/guanshiyin28/Delete-First-and-Delete-Last-Function.git
   ```
2. **Navigate to the project directory:**
   ```bash
   cd Delete-First-and-Delete-Last-Function
   ```

## Steps to Run

### Python

1. **Run the Python script:**
   ```bash
   python program.py
   ```

### C++

1. **Compile the C++ program:**
   ```bash
   g++ program.cpp -o program
   ```
2. **Run the compiled program:**
   ```bash
   ./Delete First
   ```
   ```bash
   ./Delete Last
   ```

## License

This project is licensed under the Apache-2.0 License. See the [LICENSE](LICENSE) file for details.

<hr><br>

<div align="center">
  <a href="https://www.instagram.com/guanshiyin_/">
     <img src="https://capsule-render.vercel.app/api?type=waving&height=200&color=100:FF0000,20:F0F0F0&section=footer&reversal=false&textBg=false&fontAlignY=50&descAlign=48&descAlignY=59"/>
  </a>
</div>
