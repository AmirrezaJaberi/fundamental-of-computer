#include <iostream>

int main()
{
    int x = 5;
    int y = 10;

    // && (AND) Operator
    if (x > 0 && y > 0)
    {
        std::cout << "Both x and y are greater than 0." << std::endl;
    }
    else
    {
        std::cout << "At least one of x or y is not greater than 0." << std::endl;
    }

    // || (OR) Operator
    if (x > 0 || y > 0)
    {
        std::cout << "At least one of x or y is greater than 0." << std::endl;
    }
    else
    {
        std::cout << "Neither x nor y is greater than 0." << std::endl;
    }

    // ! (NOT) Operator
    if (!(x > 0))
    {
        std::cout << "x is not greater than 0." << std::endl;
    }
    else
    {
        std::cout << "x is greater than 0." << std::endl;
    }

    return 0;
}
