#include <iostream>
int main() {

    // INFINITY  OR  NOT A NUMBER (NAN)

    double value1 {6.7};
    double value2 {};
    double value3 {};

    // INFINTY
    double infinity {value1 / value2};
    std :: cout << value1 << "/" << value2 << " yields " << infinity << std :: endl;
    std :: cout << infinity << "+" << value1 << " yields " << infinity + value1 << std :: endl;

    // NAN
    double nan {value2 / value3};
    std :: cout << value2 << "/" << value3 << " yields " << nan << std :: endl;

    return 0;
}