#include <iostream>
int main() {
    bool a{0};
    bool b{1};

    std :: cout << std :: boolalpha;
    std :: cout << "a : " << a << std :: endl;
    std :: cout << "b : " << b << std :: endl;

    std :: cout << std :: endl;
    std :: cout << "logical NOT operator..." << std :: endl;
    std :: cout << std :: endl;

    std :: cout << "!a : " << (!a) << std :: endl;
    std :: cout << "!b : " << (!b) << std :: endl;

    return 0;
}