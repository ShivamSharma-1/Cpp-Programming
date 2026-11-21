#include <iostream>
int main() {
    
    std :: cout << "------NORMAL COUT METHOD------" << std :: endl;

    // Print "I Love C++" individually 10 times...
    std :: cout << "I Love C++" << std :: endl;
    std :: cout << "I Love C++" << std :: endl;
    std :: cout << "I Love C++" << std :: endl;
    std :: cout << "I Love C++" << std :: endl;
    std :: cout << "I Love C++" << std :: endl;
    std :: cout << "I Love C++" << std :: endl;
    std :: cout << "I Love C++" << std :: endl;
    std :: cout << "I Love C++" << std :: endl;
    std :: cout << "I Love C++" << std :: endl;
    std :: cout << "I Love C++" << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "-------DO WHILE LOOP-------" << std :: endl;

    size_t i {0};
    const size_t COUNT {10};

    do {
        std :: cout << "For i {" << i + 1 << "} => I LOVE C++ 20." << std :: endl;
        i++;
    } while (i < COUNT);

    std :: cout << "Task Completed , Loop Closed : )" << std :: endl;

    return 0;
}