#include <iostream>
#include <cmath>

int main() {
    double price {-1099};
    double weight {86.5};

    std :: cout << "The actual price : " << price << std :: endl;
    std :: cout << "The actual weight : " << weight << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "The absolute price : " << std :: abs(price) << std :: endl;
    std :: cout << "The absolute weight : " << std :: abs(weight) << std :: endl;

    return 0;
}