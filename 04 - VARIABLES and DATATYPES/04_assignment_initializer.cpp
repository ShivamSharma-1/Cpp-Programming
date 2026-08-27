#include <iostream>
int main() {
    
    // ASSIGNMENT INITIALIZERS

    int elephant_count;                          // THROWS RANDOM GARBAGE VALUE.
    int lion_count = 0;                            // INITIALIZES TO ZERO.
    int dog_count = 5;                               // INITIALIZES TO FIVE.
    int cat_count = 20;                                // INITIALIZES TO TWENTY.

    int domestic_animals {dog_count + cat_count};           // CAN USE EXPRESSION AS INITIALIZER.

    std :: cout << elephant_count << std :: endl;
    std :: cout << lion_count << std :: endl;
    std :: cout << dog_count << std :: endl;
    std :: cout << cat_count << std :: endl;
    std :: cout << domestic_animals << std :: endl;

    return 0;
}