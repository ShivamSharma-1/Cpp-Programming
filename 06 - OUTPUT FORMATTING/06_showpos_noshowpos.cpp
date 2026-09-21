#include <iostream>
#include <ios>

int main() {
    int posNum {11};
    int negNum {-13};

    std :: cout << "-----DEFAULT-----" << std :: endl;
    std :: cout << "Positive Number : " << posNum << std :: endl;
    std :: cout << "Negative Number : " << negNum << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "-----showpos-----" << std :: endl;
    std :: cout << std :: showpos;
    std :: cout << "Positive Number : " << posNum << std :: endl;
    std :: cout << "Negative Number : " << negNum << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "-----noshowpos-----" << std :: endl;
    std :: cout << std :: noshowpos;
    std :: cout << "Positive Number : " << posNum << std :: endl;
    std :: cout << "Negative Number : " << negNum << std :: endl;

    return 0;
}