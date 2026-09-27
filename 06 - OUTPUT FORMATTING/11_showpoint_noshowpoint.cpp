#include <iostream>
#include <ios>

int main() {
    double a {34.1};
    double b {101.99};
    double c {12.0};
    int d {45};

    std :: cout << "-----DEFAULT-----" << std :: endl;
    std :: cout << "a : " << a << std :: endl;
    std :: cout << "b : " << b << std :: endl;
    std :: cout << "c : " << c << std :: endl;
    std :: cout << "d : " << d << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "-----SHOWPOINT-----" << std :: endl;
    std :: cout << std :: showpoint;
    std :: cout << "a : " << a << std :: endl;
    std :: cout << "b : " << b << std :: endl;
    std :: cout << "c : " << c << std :: endl;
    std :: cout << "d : " << d << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "-----NOSHOWPOINT-----" << std :: endl;
    std :: cout << std :: noshowpoint;
    std :: cout << "a : " << a << std :: endl;
    std :: cout << "b : " << b << std :: endl;
    std :: cout << "c : " << c << std :: endl;
    std :: cout << "d : " << d << std :: endl;

    return 0;
}