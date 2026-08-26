#include <iostream>
#include <string>
int main() {
    int age;
    std :: string full_name;

    std :: cout << "Enter your full name : ";
    std :: getline(std :: cin, full_name);

    std :: cout << "Enter your age : ";
    std :: cin >> age;

    std :: cout << "Hello " << full_name << std :: endl << "Your are " << age << " years old." << std :: endl;
    return 0;
}