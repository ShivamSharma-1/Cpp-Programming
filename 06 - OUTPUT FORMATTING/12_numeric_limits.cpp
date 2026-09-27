#include <iostream>
#include <ios>

int main() {

    std :: cout << "The range for SHORT is from " << std :: numeric_limits <short> :: min() << " to "
        << std :: numeric_limits <short> :: max() << std :: endl;

    std :: cout << "The range for UNSIGNED SHORT is from " << std :: numeric_limits <unsigned short> :: min() << " to "
        << std :: numeric_limits <unsigned short> :: max() << std :: endl;

    std :: cout << "The range for INT is from " << std :: numeric_limits <int> :: min() << " to "
        << std :: numeric_limits <int> :: max() << std :: endl;

    std :: cout << "The range for UNSIGNED INT is from " << std :: numeric_limits <unsigned int> :: min() << " to "
        << std :: numeric_limits <unsigned int> :: max() << std :: endl;

    std :: cout << "The range for LONG is from " << std :: numeric_limits <long> :: min() << " to "
        << std :: numeric_limits <long> :: max() << std :: endl;

    std :: cout << "The range for FLOAT is from " << std :: numeric_limits <float> :: min() << " to "
        << std :: numeric_limits <float> :: max() << std :: endl;

    std :: cout << "The range (with lowest) for FLOAT is from " << std :: numeric_limits <float> :: lowest() << " to "
        << std :: numeric_limits <float> :: min() << std :: endl;

    std :: cout << "The range (with lowest) for DOUBLE is from " << std :: numeric_limits <double> :: lowest() << " to "
        << std :: numeric_limits <double> :: min() << std :: endl;

    std :: cout << "The range (with lowest) for LONG DOUBLE is from " << std :: numeric_limits <long double> :: lowest() << " to "
        << std :: numeric_limits <long double> :: min() << std :: endl;

    return 0;
}