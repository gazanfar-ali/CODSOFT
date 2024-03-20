#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    vector<string> names;
    vector<int> grades;

    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Input student names and grades
    for (int i = 0; i < numStudents; ++i) 
	{
        string name;
        int grade;

        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> name;
        names.push_back(name);

        cout << "Enter the grade of student " << i + 1 << ": ";
        cin >> grade;
        grades.push_back(grade);
    }

    // Calculate average grade
    double sum = 0;
    for (int grade : grades)
	{
        sum += grade;
    }
    double average = sum / numStudents;

    // Find highest and lowest grades
    int highestGrade = *max_element(grades.begin(), grades.end());
    int lowestGrade = *min_element(grades.begin(), grades.end());

    // Display results
    cout << "\nAverage Grade: " << average << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    return 0;
}

