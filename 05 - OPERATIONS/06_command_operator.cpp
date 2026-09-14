#include <iostream>
int main() {
    int value {45};
    std :: cout << "The value is : " << value << std :: endl; // 45

    std :: cout << std :: endl;
    value += 5;
    std :: cout << "The value (after +=5) is : " << value << std :: endl; // 50

    std :: cout << std :: endl;
    value -= 5;
    std :: cout << "The value (after -=5) is : " << value  << std :: endl; // 45

    std :: cout << std :: endl;
    value *= 2;
    std :: cout << "The value (after *= 2) is : " << value << std :: endl;  // 90

    std :: cout << std :: endl;
    value /= 3;
    std :: cout << "The value (after /=3) is : " << value << std :: endl; // 30

    std :: cout << std :: endl;
    value %= 11;
    std :: cout << "The value (after %=11) is : " << value << std :: endl;  // 8

    return 0;
}