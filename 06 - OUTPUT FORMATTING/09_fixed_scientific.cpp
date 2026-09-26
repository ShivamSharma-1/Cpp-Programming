#include <iostream>
#include <ios>

int main() {
    double a { 3.14159265358979323846264 };
    double b { 2007.0 };
    double c { 1.34e-10 };

    std :: cout << "-----Double values (default : use scientific where necessary)-----" << std :: endl;
    std :: cout << "a : " << a << std :: endl;
    std :: cout << "b : " << b << std :: endl;
    std :: cout << "c : " << c << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "-----Double values (FIXED)-----" << std :: endl;
    std :: cout << std :: fixed;
    std :: cout << "a : " << a << std :: endl;
    std :: cout << "b : " << b << std :: endl;
    std :: cout << "c : " << c << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "-----Double values (SCIENTIFIC)-----" << std :: endl;
    std :: cout << std :: scientific;
    std :: cout << "a : " << a << std :: endl;
    std :: cout << "b : " << b << std :: endl;
    std :: cout << "c : " << c << std :: endl;

    std :: cout << std :: endl;

    std :: cout <<"-----Double values (back to default)-----" << std :: endl;
    std :: cout .unsetf(std :: ios :: scientific | std :: ios :: fixed);         // HACK...
    std :: cout << "a : " << a << std :: endl;
    std :: cout << "b : " << b << std :: endl;
    std :: cout << "c : " << c << std :: endl;

    return 0;
}