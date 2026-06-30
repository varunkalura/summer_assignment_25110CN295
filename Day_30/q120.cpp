//contact management system(mini project) using arrays, strings and functions
#include <bits/stdc++.h>
using namespace std;

struct Contact {
    char name[50];
    char phone[20];
};

void addContact(Contact c[], int &count) {

    cout << "Enter Name: ";
    cin >> c[count].name;

    cout << "Enter Phone Number: ";
    cin >> c[count].phone;

    count++;
}

void display(Contact c[], int count) {

    if (count == 0) {
        cout << "No Contacts Found.\n";
        return;
    }

    cout << "\nName\tPhone\n";

    for (int i = 0; i < count; i++) {
        cout << c[i].name << "\t"
             << c[i].phone << endl;
    }
}

void search(Contact c[], int count) {

    char name[50];

    cout << "Enter Name: ";
    cin >> name;

    for (int i = 0; i < count; i++) {
        if (strcmp(c[i].name, name) == 0) {
            cout << "Contact Found\n";
            cout << "Phone Number: " << c[i].phone << endl;
            return;
        }
    }

    cout << "Contact Not Found.\n";
}

int main() {

    Contact c[100];
    int count = 0, choice;

    do {

        cout << "\n1.Add Contact\n2.Display Contacts\n3.Search Contact\n4.Exit\n";
        cin >> choice;

        switch (choice) {

            case 1:
                addContact(c, count);
                break;

            case 2:
                display(c, count);
                break;

            case 3:
                search(c, count);
                break;

            case 4:
                cout << "Thank You";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}