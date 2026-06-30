//mini employee management system
#include <iostream>
using namespace std;

struct Employee {
    int id;
    char name[50];
    float salary;
};

void addEmployee(Employee e[], int &count) {

    cout << "Employee ID: ";
    cin >> e[count].id;

    cout << "Employee Name: ";
    cin >> e[count].name;

    cout << "Salary: ";
    cin >> e[count].salary;

    count++;
}

void display(Employee e[], int count) {

    cout << "\nID\tName\tSalary\n";

    for (int i = 0; i < count; i++) {
        cout << e[i].id << "\t"
             << e[i].name << "\t"
             << e[i].salary << endl;
    }
}

void search(Employee e[], int count) {

    int id;
    cout << "Enter Employee ID: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (e[i].id == id) {
            cout << "Employee Found\n";
            cout << "Name: " << e[i].name << endl;
            cout << "Salary: " << e[i].salary << endl;
            return;
        }
    }

    cout << "Employee Not Found";
}

int main() {

    Employee e[100];
    int count = 0, choice;

    do {

        cout << "\n1.Add Employee\n2.Display Employees\n3.Search Employee\n4.Exit\n";
        cin >> choice;

        switch (choice) {

            case 1:
                addEmployee(e, count);
                break;

            case 2:
                display(e, count);
                break;

            case 3:
                search(e, count);
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