#include <iostream>
int main() {
    int value {1};
    
    // postfix increment
    std :: cout << "The value is : " << value++ << std :: endl;
    std :: cout << "The new value is : " << value << std :: endl;

    // Reset value to 1
    value = 1;
    std :: cout << std :: endl;

    // postfix decreament
    std :: cout << "The value is : " << value-- << std :: endl;
    std :: cout << "The new value is : " << value << std :: endl;

    return 0;
}