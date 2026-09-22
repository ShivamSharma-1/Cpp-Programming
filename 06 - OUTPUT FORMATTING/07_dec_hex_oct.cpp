#include <iostream>
#include <ios>

int main() {
    int posNum {717171};
    int negNum {-47347};
    double fractNum {498.32};

    std :: cout << "------Default base format-----" << std :: endl;
    std :: cout << "Positive Number : " << posNum << std :: endl;
    std :: cout << "Negative Number : " << negNum << std :: endl;
    std :: cout << "Fractonal Number : " << fractNum << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "-----Positive number in different basses-----" << std :: endl;
    std :: cout << "posNum in decimal : " << std :: dec << posNum << std :: endl;
    std :: cout << "posNum in hexagonal : " << std :: hex << posNum << std :: endl;
    std :: cout << "posNum in octal : " << std :: oct << posNum << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "-----Negative number in different basses-----" << std :: endl;
    std :: cout << "negNum in decimal : " << std :: dec << negNum << std :: endl;
    std :: cout << "negNum in hexagonal : " << std :: hex << negNum << std :: endl;
    std :: cout << "negNum in octal : " << std :: oct << negNum << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "-----Fractional number in different basses-----" << std :: endl;
    std :: cout << "fractNum in decimal : " << std :: dec << fractNum << std :: endl;
    std :: cout << "fractNum in hexagonal : " << std :: hex << fractNum << std :: endl;
    std :: cout << "fractNum in octal : " << std :: oct << fractNum << std :: endl;

    return 0;
}