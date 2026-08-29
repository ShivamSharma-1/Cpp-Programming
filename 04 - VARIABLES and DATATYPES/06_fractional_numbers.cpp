#include <iostream>
#include <iomanip>

int main() {

    // DECLARE AND INITIALIZES THE VARIABLES...
    float value1 {1.123456789123456789123456789f};
    double value2 {2.123456789123456789123456789};
    long double value3 {3.123456789123456789123456789L};

    // PRINT OUT THE SIZES...
    std :: cout << "Size of float : " << sizeof(value1) << std :: endl;
    std :: cout << "Size of double : " << sizeof(value2) << std :: endl;
    std :: cout << "Size of long double : " << sizeof(value3) << std :: endl;

    // PRECISION OF THE FRACTIONAL VARIABLES...
    std :: cout << std :: setprecision(20);               // TO CONTROL THE PRECISION OF LONG DOUBLE FROM std :: cout

    std :: cout << "Number 1 : " << value1 << std :: endl;    // 7 DIGITS
    std :: cout << "Number 2 : " << value2 << std :: endl;      // 15 OR 16 OR 17 DIGITS
    std :: cout << "Number 3 : " << value3 << std :: endl;         // 15+ DIGITS
    return 0;
}