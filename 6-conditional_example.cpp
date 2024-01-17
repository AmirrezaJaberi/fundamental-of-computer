#include <iostream>

int main()
{
    int a = 5;
    int b = 7;

    // Equality check (==)
    if (a == b)
    {
        std::cout << "a is equal to b" << std::endl;
    }
    else
    {
        std::cout << "a is not equal to b" << std::endl;
    }

    // Inequality check (!=)
    if (a != b)
    {
        std::cout << "a is not equal to b" << std::endl;
    }
    else
    {
        std::cout << "a is equal to b" << std::endl;
    }

    // Greater than (>)
    if (a > b)
    {
        std::cout << "a is greater than b" << std::endl;
    }
    else
    {
        std::cout << "a is not greater than b" << std::endl;
    }

    // Greater than or equal to (>=)
    if (a >= b)
    {
        std::cout << "a is greater than or equal to b" << std::endl;
    }
    else
    {
        std::cout << "a is less than b" << std::endl;
    }

    // Less than (<)
    if (a < b)
    {
        std::cout << "a is less than b" << std::endl;
    }
    else
    {
        std::cout << "a is not less than b" << std::endl;
    }

    // Less than or equal to (<=)
    if (a <= b)
    {
        std::cout << "a is less than or equal to b" << std::endl;
    }
    else
    {
        std::cout << "a is greater than b" << std::endl;
    }

    return 0;
}
