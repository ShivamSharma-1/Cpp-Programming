#include <iostream>
#include <iomanip>

int main() {

    // std :: setw;
    // Adjusts the field with for the item about to be printed.
    // the setw() manipulator only affects the next value to be printed.

    std :: cout << "----UNFORMATTED TABLE----" << std :: endl;
    std :: cout << std :: endl;
    std :: cout << "SHIVAM" << " " << "SHARMA" << " " << "20\n";
    std :: cout << "ANJALI" << " " << "SHARMA" << " " << "25\n";
    std :: cout << "RIYA" << " " << "SHARMA" << " " << "21\n";
    std :: cout << "MUSKAN" << " " << "SHARMA" << " " << "21\n";
    std :: cout << "SIDHANT" << " " << "SHARMA" << " " << "15\n";
    
    std :: cout << std :: endl;

    std :: cout << "----FORMATTED TABLE----" << std :: endl;
    std :: cout << std :: endl;
    std :: cout << std :: right;
    std :: cout << std :: setw(12) << "FIRSTNAME" << std :: setw(12) << "LASTNAME" << std :: setw(12) << "AGE" << std :: endl;
    std :: cout << std :: setw(12) << "Shivam" << std :: setw(12) << "Sharma" << std :: setw(12) << "20" << std :: endl;
    std :: cout << std :: setw(12) << "Anajli" << std :: setw(12) << "Sharma" << std :: setw(12) << "25" << std :: endl;
    std :: cout << std :: setw(12) << "Riya" << std :: setw(12) << "Sharma" << std :: setw(12) << "21" << std :: endl;
    std :: cout << std :: setw(12) << "Muskan" << std :: setw(12) << "Sharma" << std :: setw(12) << "21" << std :: endl;
    std :: cout << std :: setw(12) << "Sidhant" << std :: setw(12) << "Sharma" << std :: setw(12) << "15" << std :: endl;

    std :: cout << std :: endl;

    std :: cout << "----FORMATTED TABLE WITH VARIABLES----" << std :: endl;
    std :: cout << std :: endl;
    int width {15};
    std :: cout << std :: left;
    std :: cout << std :: setw(width) << "FIRSTNAME" << std :: setw(width) << "LASTNAME" << std :: setw(width) << "AGE" << std :: endl;
    std :: cout << std :: setw(width) << "Shivam" << std :: setw(width) << "Sharma" << std :: setw(width) << "20" << std :: endl;
    std :: cout << std :: setw(width) << "Anajli" << std :: setw(width) << "Sharma" << std :: setw(width) << "25" << std :: endl;
    std :: cout << std :: setw(width) << "Riya" << std :: setw(width) << "Sharma" << std :: setw(width) << "21" << std :: endl;
    std :: cout << std :: setw(width) << "Muskan" << std :: setw(width) << "Sharma" << std :: setw(width) << "21" << std :: endl;
    std :: cout << std :: setw(width) << "Sidhant" << std :: setw(width) << "Sharma" << std :: setw(width) << "15" << std :: endl;

    return 0;
}