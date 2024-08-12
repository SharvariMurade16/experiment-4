# Experiment-4
## Aim-
To study and implement c++ bitwise operators.
## Theory-
Bitwise Operators
Bitwise AND (&): Sets a bit to 1 if both corresponding bits are 1. Otherwise, it’s 0. For example, 0101 & 0011 results in 0001.
Bitwise OR (|): Sets a bit to 1 if at least one of the corresponding bits is 1. For example, 0101 | 0011 results in 0111.
Bitwise XOR (^): Sets a bit to 1 if the corresponding bits are different. For example, 0101 ^ 0011 results in 0110.
Bitwise NOT (~): Inverts all the bits. For example, ~0101 results in the bitwise complement of 0101.
Left Shift (<<): Shifts bits to the left by a specified number of positions, filling in zeros on the right. For example, 0010 << 2 results in 1000.
Right Shift (>>): Shifts bits to the right by a specified number of positions. The behavior of the leftmost bits depends on whether the type is signed or unsigned. For example, 1000 >> 2 results in 0010.
These operators are useful for low-level programming and binary data manipulation.
## Code-
```
//sharvari murade
//23070123088
//entc-b1

#include<iostream>
using namespace std;
int main()
{
    int a=5;  //101
    int b=3;  // 011
    //bitwise AND
    int bitwise_and =a&b;
    int bitwise_or =a| b;
    int bitwise_xor =a ^b;
    int bitwise_not =-a;
    int left_shift =a<<2;
    int right_shift =a>> 1;
    cout<<"AND:"<<bitwise_and<<endl;
    cout<<"OR:"<<bitwise_or<<endl;
    cout<<"XOR:"<<bitwise_xor<<endl;
    cout<<"NOT a:"<<bitwise_not<<endl;
    cout<<"Left shift:"<<left_shift<<endl;
    cout<<"Right shift:"<<right_shift<<endl;
    return 0;

}
```

### Output-
![2B9D18E7-390B-48DE-B072-5309DC0607DE](https://github.com/user-attachments/assets/569c8c5a-498d-45d1-b48c-9fc0e96a463e)
## Conclusion-
Bitwise operators provide low-level data manipulation capabilities. They are essential for optimizing algorithms and are commonly used in areas such as graphics, cryptography, and systems programming.
