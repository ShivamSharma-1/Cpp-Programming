#include <iostream>
int main() {
    bool a {0};
    bool b {1};
    bool c {0};

    std :: cout << std :: boolalpha;
    std :: cout << "a : " << a << std :: endl;
    std :: cout << "b : " << b << std :: endl;
    std :: cout << "c : " << c << std :: endl;

    std :: cout << std :: endl;
    std :: cout << "logical OR operator..." << std :: endl;
    std :: cout << std :: endl;

    std :: cout << "a || b : " << (a || b) << std :: endl;
    std :: cout << "b || c : " << (b || c) << std :: endl;
    std :: cout << "c || a : " << (c || a) << std :: endl;
    std :: cout << "a || b || c : " << (a || b || c) << std :: endl;

    return 0;
}