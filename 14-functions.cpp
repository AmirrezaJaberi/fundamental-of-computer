#include <iostream>

// Function to add two numbers
int add(int x, int y)
{
    return x + y;
}

// Function to multiply two numbers
int multiply(int x, int y)
{
    return x * y;
}

// Function to print a message
void printMessage(std::string message)
{
    std::cout << "Message: " << message << std::endl;
}

// Function to check the sign of a number
void checkSign(int number)
{
    if (number > 0)
    {
        std::cout << "Positive number." << std::endl;
    }
    else if (number < 0)
    {
        std::cout << "Negative number." << std::endl;
    }
    else
    {
        std::cout << "Zero." << std::endl;
    }
}

int main()
{
    // Using functions with parameters and arguments
    int result1 = add(3, 5);
    int result2 = multiply(4, 6);
    printMessage("Hello, Functions!");
    checkSign(-7);

    // Printing the results
    std::cout << "Result of addition: " << result1 << std::endl;
    std::cout << "Result of multiplication: " << result2 << std::endl;

    return 0;
}