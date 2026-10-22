#include <iostream>
int main() {

    size_t i {0};
    const size_t COUNT {10};

    for(i; i < COUNT; i++) {
        std :: cout << "For {" << i << "} => Free Code Camp..." << std :: endl;
    }
    std :: cout << std :: endl;

    std :: cout << "At last , i = " << i << std :: endl;

    return 0;
}