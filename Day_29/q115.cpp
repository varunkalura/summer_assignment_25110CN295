//menu driven string operations system
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int choice;

    cout << "Enter a string: ";
    cin.ignore();
    cin.getline(str, 100);

    do {
        cout << "\n===== STRING OPERATIONS =====\n";
        cout << "1. Find Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Convert to Uppercase\n";
        cout << "4. Convert to Lowercase\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Length = " << strlen(str) << endl;
                break;

            case 2: {
                cout << "Reversed String: ";
                for (int i = strlen(str) - 1; i >= 0; i--)
                    cout << str[i];
                cout << endl;
                break;
            }

            case 3:
                for (int i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }
                cout << "Uppercase: " << str << endl;
                break;

            case 4:
                for (int i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                }
                cout << "Lowercase: " << str << endl;
                break;

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while (choice != 5);

    return 0;
}