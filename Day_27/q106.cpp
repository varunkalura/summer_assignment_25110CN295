//employee management system
#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
};

int main() {

    Employee emp[100];
    int n = 0, choice;

    do {

        cout << "\n--- Employee Management ---";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter ID: ";
            cin >> emp[n].id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, emp[n].name);
            cout << "Enter Department: ";
            getline(cin, emp[n].department);
            n++;
            break;

        case 2:
            for (int i = 0; i < n; i++) {
                cout << "\nID: " << emp[i].id;
                cout << "\nName: " << emp[i].name;
                cout << "\nDepartment: " << emp[i].department << endl;
            }
            break;

        case 3:
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (emp[i].id == id) {
                    cout << "\nEmployee Found";
                    cout << "\nName: " << emp[i].name;
                    cout << "\nDepartment: " << emp[i].department << endl;
                }
            }
            break;

        }

    } while (choice != 4);

    return 0;
}