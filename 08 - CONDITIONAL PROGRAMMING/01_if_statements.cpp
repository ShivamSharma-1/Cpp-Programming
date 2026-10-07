#include <iostream>
int main() {
    int num1 {55};
    int num2 {60};

    bool result {(num1 < num2)};
    std :: cout << std :: boolalpha << "Result : " << result << std :: endl;
    std :: cout << std :: endl;
    std :: cout << "-----Free standing if statement-----" << std :: endl;
    std :: cout << std :: endl;

    if(result) {
        std :: cout << num1 << " is smaller than " << num2 << std :: endl;
    }
    if(!result) {
        std :: cout << num1 << " is NOT smaller than " << num2 << std :: endl;
    }

    return 0;
}