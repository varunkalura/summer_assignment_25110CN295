//contact management system
#include <iostream>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {

    Contact c[100];
    int n = 0, choice;

    do {

        cout << "\n------ Contact Management System ------";
        cout << "\n1. Add Contact";
        cout << "\n2. Display Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Delete Contact";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {

        case 1:
            cout << "Enter Name: ";
            getline(cin, c[n].name);

            cout << "Enter Phone Number: ";
            getline(cin, c[n].phone);

            n++;

            cout << "Contact Added Successfully!\n";
            break;

        case 2:
            cout << "\nContact List\n";
            for (int i = 0; i < n; i++) {
                cout << "\nName : " << c[i].name;
                cout << "\nPhone: " << c[i].phone << endl;
            }
            break;

        case 3: {
            string name;

            cout << "Enter Name to Search: ";
            getline(cin, name);

            bool found = false;

            for (int i = 0; i < n; i++) {
                if (c[i].name == name) {
                    cout << "\nContact Found!";
                    cout << "\nName : " << c[i].name;
                    cout << "\nPhone: " << c[i].phone << endl;
                    found = true;
                }
            }

            if (!found)
                cout << "Contact Not Found!\n";

            break;
        }

        case 4: {
            string name;

            cout << "Enter Name to Delete: ";
            getline(cin, name);

            bool found = false;

            for (int i = 0; i < n; i++) {
                if (c[i].name == name) {

                    for (int j = i; j < n - 1; j++) {
                        c[j] = c[j + 1];
                    }

                    n--;
                    found = true;

                    cout << "Contact Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Contact Not Found!\n";

            break;
        }

        }

    } while (choice != 5);

    return 0;
}