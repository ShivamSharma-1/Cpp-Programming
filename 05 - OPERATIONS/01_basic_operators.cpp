#include <iostream>
int main() {
    int num1 {31};
    int num2 {10};

    int result {};

    //ADDITION...
    result = num1 + num2;
    std :: cout << "Sum of numbers : " << result << std :: endl;

    //SUBTRACTION...
    result = num1 - num2;
    std :: cout << "Subtraction of numbers : " << result << std :: endl;

    //MULTIPLICATION...
    result = num1 * num2;
    std :: cout << "Multiplication of numbres : " << result << std :: endl;

    //DIVISION...
    result = num1 / num2;      //quotient
    std :: cout  << "Result : " << result << std :: endl;

    //MODULUS...
    result = num1 % num2;      //remainder
    std :: cout << "Modulu : " << result << std :: endl;

    return 0;
}