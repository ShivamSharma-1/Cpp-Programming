#include <iostream>
int main() {
    int value {10};

    // prefix increment
    std :: cout << "The value is : " << ++value << std :: endl;
    std :: cout << "The value is : " << value << std :: endl;

    // Reset to 10
    value = 10;
    std :: cout << std :: endl;
    
    // prefix decrement
    std :: cout << "The value is : " << --value << std :: endl;
    std :: cout << "The value is : " << value << std :: endl;

    return 0;
}