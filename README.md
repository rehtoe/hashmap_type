# Integer Hashmap Implementation in C++

This repository contains a custom hashmap implementation in C++ designed specifically for integer values. The hashmap uses a modulus 10 operation to organize values into bucket groups.

## Implementation Details

- **Hashing Function**: Uses modulus 10 operation (`key = value % 10`) to distribute integer keys into 10 bucket groups
- **Data Structure**: Built using pointers in C++ for efficient memory management
- **Bucket Organization**: Numbers are grouped based on the remainder when divided by 10 (their last digit)

## Changelog

**_Wednesday June 11 2025_**  
Remade a Hashmap for integer values with C++ using pointers.

It is my understanding that a hashmap organizes values into groups such as numbers into integer digit groups based off the remainder of dividing a number by base 10.

## Usage

### Method 1 Project based
1. Clone the repository
2. Include the header file in your C++ project
3. Create a hashmap instance and use the provided methods

Example:
```cpp
#include "IntegerHashmap.h"

int main() {
    IntegerHashmap map;
    map.insert(42);
    map.insert(35);
    // ... other operations
    return 0;
}
```

### Method 2 PATH
1. Download package.
2. Include in PATH directory (use google or ai for windows, on unix, i moved it into my /usr/include/..)
