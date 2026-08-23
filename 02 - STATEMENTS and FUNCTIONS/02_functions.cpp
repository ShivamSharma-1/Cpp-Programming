#include <iostream>
int printSum (int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}
int main(){
    int firstNumber = 33;
    int secondNumber = 66;

    std :: cout << "Sum of numbers : " << printSum(firstNumber, secondNumber) << std :: endl;
    return 0;
}