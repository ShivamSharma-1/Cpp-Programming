#include <iostream>
#include <cmath>

int main() {
    int a {2};
    int b {5};

    std :: cout << "The value of 2^5 is : " << std :: pow(a,b) << std :: endl;
    std :: cout << std :: endl;

    a = 3;
    b = 3;

    std :: cout << "The value of 3^3 is : " << std :: pow(a,b) << std :: endl;
    std :: cout << std :: endl;

    return 0;
}