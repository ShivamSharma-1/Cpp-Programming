#include <iostream>
#include <cmath>

int main() {
    double number {5.6};

    std :: cout << "The actual number : " << number << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "The changed number : " << std :: ceil(number) << std :: endl;        //CHANGES TO NEXT INTEGER.

    return 0;
}