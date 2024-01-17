#include <iostream>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        // If the number is odd, skip to the next iteration
        if (i % 2 == 1)
        {
            continue;
        }

        // If we reach the number 7, break out of the loop
        if (i == 7)
        {
            std::cout << "Reached 7, breaking loop." << std::endl;
            break;
        }

        std::cout << i << " ";
    }

    return 0;
}
