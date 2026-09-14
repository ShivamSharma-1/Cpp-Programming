#include <iostream>
int main() {
    int num1 {45};
    int num2 {60};

    std :: cout << "Number 1 : " << num1 << std :: endl;
    std :: cout << "Number 2 : " << num2 << std :: endl;

    std :: cout << "COMPARING VARIABLES" << std :: endl;
    std :: cout << std :: endl;

    std :: cout << std :: boolalpha;
    
    std :: cout << "Number1 < Number2 => " << (num1 < num2) << std :: endl;
    std :: cout << "Number1 <= Number2 => " << (num1 <= num2) << std :: endl;
    std :: cout << "Number1 > Number2 => " << (num1 > num2) << std :: endl;
    std :: cout << "Number1 >= Number2 => " << (num1 >= num2) << std :: endl;
    std :: cout << "Number1 == Number2 => " << (num1 == num2) << std :: endl;
    std :: cout << "Number1 != Number2 => " << (num1 != num2) << std :: endl;
    
    return 0;
}