//inventory management system
#include <iostream>
using namespace std;

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {

    Item item[100];
    int count = 0;
    int choice;

    do {

        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter Item ID: ";
                cin >> item[count].id;

                cout << "Enter Item Name: ";
                cin >> item[count].name;

                cout << "Enter Quantity: ";
                cin >> item[count].quantity;

                cout << "Enter Price: ";
                cin >> item[count].price;

                count++;
                cout << "Item Added Successfully.\n";
                break;

            case 2:

                if (count == 0) {
                    cout << "No Items Available.\n";
                } else {
                    cout << "\nID\tName\tQty\tPrice\n";

                    for (int i = 0; i < count; i++) {
                        cout << item[i].id << "\t"
                             << item[i].name << "\t"
                             << item[i].quantity << "\t"
                             << item[i].price << endl;
                    }
                }

                break;

            case 3: {
                int id;
                bool found = false;

                cout << "Enter Item ID to Search: ";
                cin >> id;

                for (int i = 0; i < count; i++) {
                    if (item[i].id == id) {
                        cout << "\nItem Found\n";
                        cout << "ID: " << item[i].id << endl;
                        cout << "Name: " << item[i].name << endl;
                        cout << "Quantity: " << item[i].quantity << endl;
                        cout << "Price: " << item[i].price << endl;

                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Item Not Found.\n";

                break;
            }

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while (choice != 4);

    return 0;
}