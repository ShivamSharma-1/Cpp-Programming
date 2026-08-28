#include <iostream>
int main(){
    int value1 {10};
    int value2 {-300};

    std::cout << "Vlaue 1 : " << value1 << std:: endl;
    std::cout << "Vlaue 2 : " << value2 << std:: endl;
    std::cout << "Size of value1 : " << sizeof(value1) << std :: endl;
    std::cout << "Size of value2 : " << sizeof(value2) << std :: endl;

    signed int value3 {10};
    signed int value4 {-300};
    unsigned int value5 {10};
    // unsigned int value6 {-300};                    // THIS WILL GIVE COMPILE TIME ERROR...

    std::cout << "Vlaue 3 : " << value3 << std:: endl;
    std::cout << "Vlaue 4 : " << value4 << std:: endl;
    std::cout << "Vlaue 5 : " << value5 << std:: endl;
    std::cout << "Size of value3 : " << sizeof(value3) << std :: endl;
    std::cout << "Size of value4 : " << sizeof(value4) << std :: endl;
    std::cout << "Size of value5 : " << sizeof(value5) << std :: endl;
    return 0; 
}