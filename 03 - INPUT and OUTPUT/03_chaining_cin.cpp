#include <iostream>
#include <string>
int main() {
    int age;
    std::string name;

    std :: cout << "Enter your name and age, respectively after space : ";     // ONLY ENTER YOUR FIRST NAME.
    std :: cin >> name >> age;           // CHAINING.

    std :: cout << "Hello " << name << std :: endl << "You are " << age << " years old." << std :: endl;
}