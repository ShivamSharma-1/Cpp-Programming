#include <iostream>
int main() {
    bool red {0};
    bool green {1};
    bool yellow {0};
    bool policeStop {1};

    std :: cout << "-----Nesting if statements-----" << std :: endl;
    std :: cout << std :: endl;

    // normal traffic rules
    // the way you have to behave with each sign...
    
    if(red) {
        std :: cout << "STOP" << std :: endl;
    } if (green) {
        std :: cout << "GO" << std :: endl;
    } if (yellow) {
        std :: cout << "SLOW DOWN" << std :: endl;
    }



    // if police told to stop you...

    std :: cout << "-----Police Officer said to stop(verbose)-----" << std :: endl;
    std :: cout << std :: endl;

    if(green) {
        if (policeStop) {
            std :: cout << "STOP IN THE CORNER" << std :: endl;
        } else {
            std :: cout << "DON'T STOP" << std :: endl;
        }
    }
    return 0;
}