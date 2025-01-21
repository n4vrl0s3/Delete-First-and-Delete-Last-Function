<div align=center>

<img src="https://capsule-render.vercel.app/api?type=waving&height=100&color=100:FF0000,20:F0F0F0&section=footer&reversal=false&textBg=false&fontAlignY=50&descAlign=48&descAlignY=59"/>

![Jane Doe Banner](https://github.com/user-attachments/assets/6dce4a9a-c124-413d-816b-a0ea878a6cd9)
<img src="https://capsule-render.vercel.app/api?type=waving&height=100&color=20:FF0000,100:F0F0F0&section=header&reversal=false&textBg=false&fontAlignY=50&descAlign=48&descAlignY=59"/>

</div>

# Delete First and Delete Last Function

This repository aims to provide a comprehensive starting point for understanding and implementing two fundamental list operations: deleting the first element and deleting the last element. These operations are implemented in Python and C++ and serve as a great introduction to list manipulation for beginners and intermediate programmers.

<hr><br>

## Purpose of This Repository

### Deleting the First Element

Deleting the first element of a list is a basic operation that involves removing the element at the beginning of the list and shifting all subsequent elements one position to the left. This repository provides examples of how to perform this operation efficiently in Python and C++.

### Deleting the Last Element

Deleting the last element of a list is another essential operation that involves removing the element at the end of the list. This operation is straightforward and is commonly used in various programming tasks. This repository includes examples of how to handle this operation in Python and C++.

<hr><br>

## Demo

Here are some examples of the operations in action:

### Python

```python
# Deleting the first element
my_list = [1, 2, 3, 4, 5]
del my_list[0]
print(my_list)  # Output: [2, 3, 4, 5]

# Deleting the last element
my_list = [1, 2, 3, 4, 5]
my_list.pop()
print(my_list)  # Output: [1, 2, 3, 4]
```

### C++

```cpp
// Deleting the first element
std::vector<int> my_list = {1, 2, 3, 4, 5};
my_list.erase(my_list.begin());
for (int i : my_list) std::cout << i << " ";  // Output: 2 3 4 5

// Deleting the last element
std::vector<int> my_list = {1, 2, 3, 4, 5};
my_list.pop_back();
for (int i : my_list) std::cout << i << " ";  // Output: 1 2 3 4
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

1. Clone the repository:
   ```bash
   git clone https://github.com/guanshiyin28/Delete-First-and-Delete-Last-Function.git
   ```
2. Navigate to the project directory:
   ```bash
   cd Delete-First-and-Delete-Last-Function
   ```

## Steps to Run

### Python

1. Run the Python script:
   ```bash
   python program.py
   ```

### C++

1. Compile the C++ program:
   ```bash
   g++ program.cpp -o program
   ```
2. Run the compiled program:
   ```bash
   ./Delete First
   ```
   ```bash
   ./Delete Last
   ```

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

<hr><br>

<div align="center">
  <a href="https://www.instagram.com/guanshiyin_/">
     <img src="https://capsule-render.vercel.app/api?type=waving&height=200&color=100:FF0000,20:F0F0F0&section=footer&reversal=false&textBg=false&fontAlignY=50&descAlign=48&descAlignY=59"/>
  </a>
</div>
