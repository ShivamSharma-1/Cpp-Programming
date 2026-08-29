#include <iostream>
int main(){

    /*
        SCIENTIFIC NOTATION
        What we have seen so far in terms of floaing point types is fixed notation.
        There is another notation, scientific notation
        that is handy if you have really huge numbers or small numbers to represent...
    */

    double value1 {192400023};
    double value2 {1.92400023e8};
    double value3 {1.924e8};
    double value4 {0.00000000003498};
    double value5 {3.498e-11};

    std :: cout << "Number 1 : " << value1 << std :: endl;
    std :: cout << "Number 2 : " << value2 << std :: endl;
    std :: cout << "Number 3 : " << value3 << std :: endl;
    std :: cout << "Number 4 : " << value4 << std :: endl;
    std :: cout << "Number 5 : " << value5 << std :: endl;

    return 0;
}