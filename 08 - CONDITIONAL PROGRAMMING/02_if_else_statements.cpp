#include <iostream>
int main() {
    int num1 {65};
    int num2 {60};

    std :: cout << "-----Free standing if-else statement-----" << std :: endl;
    std :: cout << std :: endl;

    if(num1 < num2) {
        std :: cout << num1 << " is smaller than " << num2 << std :: endl;
    } else {
        std :: cout << num1 << " is NOT smaller than " << num2 << std :: endl;
    }

    return 0;
}