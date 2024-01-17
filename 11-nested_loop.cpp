#include <iostream>

int main()
{
    const int numStudents = 3;
    const int numExams = 4;

    // Array to store student grades
    int grades[numStudents][numExams] = {
        {90, 85, 88, 92},
        {78, 89, 91, 87},
        {85, 80, 82, 88}};

    // Nested loop to print student grades
    for (int i = 0; i < numStudents; i++)
    {
        std::cout << "Student " << i + 1 << " Grades: ";
        for (int j = 0; j < numExams; j++)
        {
            std::cout << grades[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
