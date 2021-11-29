#include "main.h"

int main()
{
    int testNum;

    std::cout << "Enter a Number:\n";
    std::cin >> testNum;

    if (isEven(testNum))
        std::cout << "The value " << testNum << " is an even number.\n";
    else
        std::cout << "The value " << testNum << " is an odd number.\n";

    return 0;
}

bool isEven(int number)
{
    if (number % 2)
        return false;

    return true;
}