#include <iostream>

int main()
{
    // 1. Get an integer from the user
    int i;
    std::cout << "Enter an integer: ";
    std::cin >> i;

    // 2. Post-increment (i++)
    int postIncrement = i++;
    std::cout << "Post-increment (i++): " << postIncrement << std::endl;

    // 3. Pre-increment (++i)
    int preIncrement = ++i;
    std::cout << "Pre-increment (++i): " << preIncrement << std::endl;

    // 4. Assignment with addition (i = i + 1)
    int assignmentWithAddition = i = i + 1;
    std::cout << "Assignment with addition (i = i + 1): " << assignmentWithAddition << std::endl;

    // 5. Print the final value of i
    std::cout << "Final value of i: " << i << std::endl;

    return 0;
}
