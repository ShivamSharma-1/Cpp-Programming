#include <iostream>
int main() {
    std :: cout << "-----Ternary initializer-----" << std :: endl;
    
    int velocity1 {100};
    int velocity2 {150};
    
    bool fast {0};

    int speed {fast ? velocity2 : velocity1};

    std :: cout << "The speed of the vehicle is : " << speed << std :: endl;

    return 0;
}