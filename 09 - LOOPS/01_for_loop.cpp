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

    std :: cout << "-------USING FOR LOOP-------" << std :: endl;

    for(unsigned int i {0}; i < 10; i++) {
        std :: cout << "For i {" << i << "} => I Love C++" << std :: endl;
    }
    std :: cout << "Task completed , Loop closed !!!" << std :: endl;

    return 0;
}