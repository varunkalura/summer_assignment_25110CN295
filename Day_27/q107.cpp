//salary management system
#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float basicSalary;
    float bonus;
};

int main() {

    Employee emp[100];
    int n = 0, choice;

    do {

        cout << "\n--- Salary Management ---";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Salary";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Employee ID: ";
            cin >> emp[n].id;
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, emp[n].name);

            cout << "Enter Basic Salary: ";
            cin >> emp[n].basicSalary;

            cout << "Enter Bonus: ";
            cin >> emp[n].bonus;

            n++;
            break;

        case 2:
            for (int i = 0; i < n; i++) {

                float total = emp[i].basicSalary + emp[i].bonus;

                cout << "\nEmployee ID: " << emp[i].id;
                cout << "\nName: " << emp[i].name;
                cout << "\nBasic Salary: " << emp[i].basicSalary;
                cout << "\nBonus: " << emp[i].bonus;
                cout << "\nTotal Salary: " << total << endl;
            }
            break;

        }

    } while (choice != 3);

    return 0;
}