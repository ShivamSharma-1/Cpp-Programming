#include <iostream>
#include <cmath>

int main() {
    float a {3.654f};
    float b {2.5f};
    float c {1.4f};
    float d {3.5f};
    float e {5.6f};

    std :: cout << a << " rounded to : " << std :: round(a) << std :: endl;
    std :: cout << b << " rounded to : " << std :: round(b) << std :: endl;
    std :: cout << c << " rounded to : " << std :: round(c) << std :: endl;
    std :: cout << d << " rounded to : " << std :: round(d) << std :: endl;
    std :: cout << e << " rounded to : " << std :: round(e) << std :: endl;

    return 0;
}