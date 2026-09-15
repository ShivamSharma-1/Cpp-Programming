#include <iostream>

int main() {
    short int num1 {10};
    short int num2 {20};

    char num3 {30};
    char num4 {40};

    std :: cout << "The size of num1 : " << sizeof(num1) << std :: endl;
    std :: cout << "The size of num2 : " << sizeof(num2) << std :: endl;
    std :: cout << "The size of num3 : " << sizeof(num3) << std :: endl;
    std :: cout << "The size of num4 : " << sizeof(num4) << std :: endl;

    auto result1 = num1 + num2;
    auto result2 = num3 + num4;

    // Here auto changes the short int and char to int datatypes,
    // when we use arithmetic with these to data types...

    std :: cout << "The size of result1 : " << sizeof(result1) << std :: endl;
    std :: cout << "The size of result2 : " << sizeof(result2) << std :: endl;

    return 0;
}