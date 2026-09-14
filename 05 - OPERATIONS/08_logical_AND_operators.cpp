#include <iostream>
int main() {
    bool a {1};
    bool b {0};
    bool c {1};

    std :: cout << std :: boolalpha;
    std :: cout << "a : " << a << std :: endl;
    std :: cout << "b : " << b << std :: endl;
    std :: cout << "c : " << c << std :: endl;

    std :: cout << std :: endl;
    std :: cout << "basic AND operations..." << std:: endl;
    std :: cout << std :: endl;

    std :: cout << "a && b : " << (a && b) << std :: endl;
    std :: cout << "a && c : " << (a && c) << std :: endl;
    std :: cout << "b && c : " << (b && c) << std :: endl;
    std :: cout << "a && b && c : " << (a && b && c) << std ::endl;
    return 0;
}