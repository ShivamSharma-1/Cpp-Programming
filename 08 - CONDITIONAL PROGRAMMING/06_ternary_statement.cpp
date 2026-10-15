#include <iostream>
int main() {
    int a {35};
    int b {20};

    std :: cout << "-----USING REGULAR IF STATEMENT-----" << std :: endl;
    std :: cout << std :: endl;

    int largeNumber{};

    if(a > b) {
        largeNumber = a;
    } else if (b > a) {
        largeNumber = b;
    }

    std :: cout << "Maximum number : " << largeNumber << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "-----USING TERNARY STATEMENT------" << std :: endl;

    largeNumber = (a > b) ? a : b;                  // TERNARY STATEMENT...
    std :: cout << "Maximum number : " << largeNumber << std :: endl;

    return 0;
}