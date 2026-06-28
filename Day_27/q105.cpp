//student record management system
#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    int age;
};

int main() {
    Student s[100];
    int n = 0, choice;

    do {
        cout << "\n--- Student Record Management ---";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Roll No: ";
            cin >> s[n].roll;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, s[n].name);
            cout << "Enter Age: ";
            cin >> s[n].age;
            n++;
            break;

        case 2:
            cout << "\nStudent Records:\n";
            for (int i = 0; i < n; i++) {
                cout << "Roll: " << s[i].roll
                     << "\nName: " << s[i].name
                     << "\nAge: " << s[i].age << "\n\n";
            }
            break;

        case 3:
            int roll;
            cout << "Enter Roll No: ";
            cin >> roll;

            for (int i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    cout << "Found!\n";
                    cout << "Name: " << s[i].name << endl;
                    cout << "Age: " << s[i].age << endl;
                }
            }
            break;

        }

    } while (choice != 4);

    return 0;
}