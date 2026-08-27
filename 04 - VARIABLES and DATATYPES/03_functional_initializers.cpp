#include <iostream>
int main() {
    
    // FUNCTIONAL INITIALIZERS

    int chilli_count (5);                              // INITIALIZES TO FIVE.
    int capsicum_count (20);                               // INITIALIZES TO TWENTY.

    int vegetables_count (chilli_count + capsicum_count);         // CAN USE EXPRESSION AS INITIALIZER.

    std :: cout << chilli_count << std :: endl;
    std :: cout << capsicum_count << std :: endl;
    std :: cout << vegetables_count << std :: endl;

    return 0;
}