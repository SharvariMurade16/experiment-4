```
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num, set, reset;
    // Input the number and bit positions to set and reset
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to set (0 to 7): ";
    cin >> set;
    cout << "Enter the bit position to reset (0 to 7): ";
    cin >> reset;
    // Display the original number in binary
    std::cout << num << " in binary is " << std::bitset<8>(num) << std::endl;
    // Set the bit at set_pos
    int num_set = num | (1 << set);
    std::cout << "Result after setting bit number " <<set<< " is " << std::bitset<8>(num_set) << std::endl;
    // Reset the bit at reset_pos
    int num_reset = num_set & ~(1 << reset);
    std::cout << "Result after resetting bit number " <<reset<< " is " << std::bitset<8>(num_reset) << std::endl;
    return 0;
}
```
