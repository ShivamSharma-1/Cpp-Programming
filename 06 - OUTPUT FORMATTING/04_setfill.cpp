#include <iostream>
#include <iomanip>

int main() {
    std :: cout << "----FORMATTED TABLE FILLED WITH (-)----" << std :: endl;
    std :: cout << std :: endl;
    int width {20};
    std :: cout << std :: left;
    std :: cout << std :: setfill('-');
    std :: cout << std :: setw(width) << "FIRSTNAME" << std :: setw(width) << "LASTNAME" << std :: setw(width) << "AGE" << std :: endl;
    std :: cout << std :: setw(width) << "Shivam" << std :: setw(width) << "Sharma" << std :: setw(width) << "20" << std :: endl;
    std :: cout << std :: setw(width) << "Anajli" << std :: setw(width) << "Sharma" << std :: setw(width) << "25" << std :: endl;
    std :: cout << std :: setw(width) << "Riya" << std :: setw(width) << "Sharma" << std :: setw(width) << "21" << std :: endl;
    std :: cout << std :: setw(width) << "Muskan" << std :: setw(width) << "Sharma" << std :: setw(width) << "21" << std :: endl;
    std :: cout << std :: setw(width) << "Sidhant" << std :: setw(width) << "Sharma" << std :: setw(width) << "15" << std :: endl;

    return 0;
}