//library management system
#include <iostream>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool issued;
};

int main() {
    Book b[100];
    int n = 0, choice;

    do {
        cout << "\n------ Library Management System ------";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Issue Book";
        cout << "\n4. Return Book";
        cout << "\n5. Search Book";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Book ID: ";
            cin >> b[n].id;
            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, b[n].title);

            cout << "Enter Author Name: ";
            getline(cin, b[n].author);

            b[n].issued = false;
            n++;
            cout << "Book Added Successfully!\n";
            break;

        case 2:
            cout << "\nBook Records\n";
            for (int i = 0; i < n; i++) {
                cout << "\nBook ID : " << b[i].id;
                cout << "\nTitle   : " << b[i].title;
                cout << "\nAuthor  : " << b[i].author;
                cout << "\nStatus  : ";
                if (b[i].issued)
                    cout << "Issued";
                else
                    cout << "Available";
                cout << "\n";
            }
            break;

        case 3: {
            int id;
            cout << "Enter Book ID to Issue: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (b[i].id == id) {
                    if (!b[i].issued) {
                        b[i].issued = true;
                        cout << "Book Issued Successfully!\n";
                    } else {
                        cout << "Book Already Issued!\n";
                    }
                }
            }
            break;
        }

        case 4: {
            int id;
            cout << "Enter Book ID to Return: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (b[i].id == id) {
                    if (b[i].issued) {
                        b[i].issued = false;
                        cout << "Book Returned Successfully!\n";
                    } else {
                        cout << "Book was not Issued!\n";
                    }
                }
            }
            break;
        }

        case 5: {
            int id;
            cout << "Enter Book ID to Search: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (b[i].id == id) {
                    cout << "\nBook Found!";
                    cout << "\nTitle  : " << b[i].title;
                    cout << "\nAuthor : " << b[i].author;
                    cout << "\nStatus : ";
                    if (b[i].issued)
                        cout << "Issued";
                    else
                        cout << "Available";
                    cout << endl;
                }
            }
            break;
        }

        }

    } while (choice != 6);

    return 0;
}