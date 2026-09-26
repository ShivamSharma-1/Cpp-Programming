#include <iostream>
#include <iomanip>

int main() {
    double a { 3.14159265358979323846 };

    std :: cout << "-----Default precision (6)-----" << std :: endl;
    std :: cout << "a : " << a << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "-----Precision (10)------" << std :: endl;
    std :: cout << std :: setprecision(10);
    std :: cout << "a : " << a << std :: endl;

    std :: cout << std :: endl;
    
    std :: cout << "------Precision (20)------" << std :: endl;
    std :: cout << std :: setprecision(20);
    std :: cout << "a : " << a << std :: endl;

    return 0;
}