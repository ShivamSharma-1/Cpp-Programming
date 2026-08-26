#include <iostream>
#include <string>
int main() {
    // READING DATA...
    int age;
    std::string name;

    std :: cout << "Enter your name : ";     // ONLY ENTER YOUR FIRST NAME.
    std :: cin >> name;

    std :: cout << "Enter your age : ";
    std :: cin >> age;

    std :: cout << "Hello " << name << std :: endl << "You are " << age << " years old." << std :: endl;
}