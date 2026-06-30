//student record system using arrays and strings
#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[50];
    float marks;
};

void addStudent(Student s[], int &count) {
    cout << "Enter Roll No: ";
    cin >> s[count].roll;

    cout << "Enter Name: ";
    cin >> s[count].name;

    cout << "Enter Marks: ";
    cin >> s[count].marks;

    count++;
    cout << "Student Added Successfully.\n";
}

void display(Student s[], int count) {
    if (count == 0) {
        cout << "No Records Found.\n";
        return;
    }

    cout << "\nRoll\tName\tMarks\n";
    for (int i = 0; i < count; i++) {
        cout << s[i].roll << "\t"
             << s[i].name << "\t"
             << s[i].marks << endl;
    }
}

void search(Student s[], int count) {
    int roll;
    cout << "Enter Roll Number: ";
    cin >> roll;

    for (int i = 0; i < count; i++) {
        if (s[i].roll == roll) {
            cout << "Record Found\n";
            cout << "Name: " << s[i].name << endl;
            cout << "Marks: " << s[i].marks << endl;
            return;
        }
    }

    cout << "Record Not Found.\n";
}

int main() {
    Student s[100];
    int count = 0, choice;

    do {
        cout << "\n1.Add Student\n2.Display Students\n3.Search Student\n4.Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(s, count);
                break;

            case 2:
                display(s, count);
                break;

            case 3:
                search(s, count);
                break;

            case 4:
                cout << "Program Ended";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}