#include <iostream>
#include <ios>

int main() {
    bool condition {true};
    bool otherCondition {false};

    std :: cout << "-----DEFAULT-----" << std :: endl;
    std :: cout << "Condition : " << condition << std :: endl;
    std :: cout << "Other Condition : " << otherCondition << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "-----boolalpha-----" << std :: endl;
    std :: cout << std :: boolalpha;
    std :: cout << "Condition : " << condition << std :: endl;
    std :: cout << "Other Condition : " << otherCondition << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "-----noboolalpha-----" << std :: endl;
    std :: cout << std :: noboolalpha;
    std :: cout << "Condition : " << condition << std :: endl;
    std :: cout << "Other Condition : " << otherCondition << std :: endl;

    return 0;
}