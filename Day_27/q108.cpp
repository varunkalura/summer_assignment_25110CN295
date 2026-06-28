//marksheet generation system
#include <iostream>
using namespace std;

int main() {

    string name;
    int roll;
    float m1, m2, m3, m4, m5;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter marks of 5 subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    float total = m1 + m2 + m3 + m4 + m5;
    float percentage = total / 5;

    char grade;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n------ MARKSHEET ------";
    cout << "\nName       : " << name;
    cout << "\nRoll No    : " << roll;
    cout << "\nTotal      : " << total;
    cout << "\nPercentage : " << percentage << "%";
    cout << "\nGrade      : " << grade;

    if (grade == 'F')
        cout << "\nResult     : Fail";
    else
        cout << "\nResult     : Pass";

    return 0;
}