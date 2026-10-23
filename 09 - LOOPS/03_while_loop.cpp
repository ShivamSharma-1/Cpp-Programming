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

    std :: cout << "-------USING WHILE LOOP-------" << std :: endl;

    const unsigned int COUNT {10};
    unsigned int i {0};
    while (i < COUNT) {
        std :: cout << "For i {" << i+1 << "} : I LOVE C++ 20" << std :: endl;
        i++;
    }
    std :: cout << "Task Completed , Loop Closed ~!" << std :: endl;

    return 0;
}