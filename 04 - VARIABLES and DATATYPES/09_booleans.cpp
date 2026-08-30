#include <iostream>
int main () {
    bool redLight {false};
    bool greenLight {true};

    if(redLight == true){     // if(redLight) { }     this can also work...
        std :: cout << "It's red light, STOP!" << std :: endl;;
    } else {
        std :: cout << "It's green light, GO THROUGH!" << std :: endl;
    }

    return 0;
}