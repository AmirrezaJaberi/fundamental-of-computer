#include <iostream>

int main()
{
    // Correcting the data in the array
    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // Example 1: Printing all elements in the array
    std::cout << "Example 1: Printing all elements in the array" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << a[i][j] << " ";
        }
    }
    std::cout << std::endl;

    // Example 2: Sum of elements in each row
    std::cout << "Example 2: Sum of elements in each row" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < 4; j++)
        {
            rowSum += a[i][j];
        }
        std::cout << "Sum of row " << i + 1 << ": " << rowSum << std::endl;
    }

    // Example 3: Finding the maximum number in the array
    int maxNumber = a[0][0];
    std::cout << "Example 3: Finding the maximum number in the array" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] > maxNumber)
            {
                maxNumber = a[i][j];
            }
        }
    }
    std::cout << "Maximum number: " << maxNumber << std::endl;

    return 0;
}
