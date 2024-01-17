#include <iostream>

int main()
{
    int choice;

    // Get input from the user
    std::cout << "Enter a number (1-3): ";
    std::cin >> choice;

    // Use switch to check the value and execute the corresponding text
    switch (choice)
    {
    case 1:
        std::cout << "You chose One." << std::endl;
        break;
    case 2:
        std::cout << "You chose Two." << std::endl;
        break;
    case 3:
        std::cout << "You chose Three." << std::endl;
        break;
    default:
        std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}
