//mini library system
#include <iostream>
using namespace std;

struct Book {
    int id;
    char title[50];
    char author[50];
};

void addBook(Book b[], int &count) {
    cout << "Book ID: ";
    cin >> b[count].id;

    cout << "Book Title: ";
    cin >> b[count].title;

    cout << "Author: ";
    cin >> b[count].author;

    count++;
}

void display(Book b[], int count) {
    if (count == 0) {
        cout << "No Books Available.\n";
        return;
    }

    cout << "\nID\tTitle\tAuthor\n";

    for (int i = 0; i < count; i++) {
        cout << b[i].id << "\t"
             << b[i].title << "\t"
             << b[i].author << endl;
    }
}

void search(Book b[], int count) {
    int id;
    cout << "Enter Book ID: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (b[i].id == id) {
            cout << "Book Found\n";
            cout << "Title : " << b[i].title << endl;
            cout << "Author: " << b[i].author << endl;
            return;
        }
    }

    cout << "Book Not Found.\n";
}

int main() {

    Book b[100];
    int count = 0, choice;

    do {
        cout << "\n1.Add Book\n2.Display Books\n3.Search Book\n4.Exit\n";
        cin >> choice;

        switch (choice) {

            case 1:
                addBook(b, count);
                break;

            case 2:
                display(b, count);
                break;

            case 3:
                search(b, count);
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