//bank account system
#include <iostream>
using namespace std;

struct Account {
    int accountNo;
    string name;
    float balance;
};

int main() {

    Account acc[100];
    int n = 0, choice;

    do {

        cout << "\n------ Bank Account System ------";
        cout << "\n1. Create Account";
        cout << "\n2. Display Accounts";
        cout << "\n3. Deposit Money";
        cout << "\n4. Withdraw Money";
        cout << "\n5. Search Account";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Account Number: ";
            cin >> acc[n].accountNo;
            cin.ignore();

            cout << "Enter Account Holder Name: ";
            getline(cin, acc[n].name);

            cout << "Enter Initial Balance: ";
            cin >> acc[n].balance;

            n++;
            cout << "Account Created Successfully!\n";
            break;

        case 2:
            cout << "\nAccount Details\n";
            for (int i = 0; i < n; i++) {
                cout << "\nAccount No : " << acc[i].accountNo;
                cout << "\nName       : " << acc[i].name;
                cout << "\nBalance    : " << acc[i].balance << endl;
            }
            break;

        case 3: {
            int accNo;
            float amount;

            cout << "Enter Account Number: ";
            cin >> accNo;

            cout << "Enter Deposit Amount: ";
            cin >> amount;

            for (int i = 0; i < n; i++) {
                if (acc[i].accountNo == accNo) {
                    acc[i].balance += amount;
                    cout << "Deposit Successful!\n";
                    cout << "Current Balance: " << acc[i].balance << endl;
                }
            }
            break;
        }

        case 4: {
            int accNo;
            float amount;

            cout << "Enter Account Number: ";
            cin >> accNo;

            cout << "Enter Withdrawal Amount: ";
            cin >> amount;

            for (int i = 0; i < n; i++) {
                if (acc[i].accountNo == accNo) {
                    if (amount <= acc[i].balance) {
                        acc[i].balance -= amount;
                        cout << "Withdrawal Successful!\n";
                        cout << "Current Balance: " << acc[i].balance << endl;
                    } else {
                        cout << "Insufficient Balance!\n";
                    }
                }
            }
            break;
        }

        case 5: {
            int accNo;
            cout << "Enter Account Number to Search: ";
            cin >> accNo;

            for (int i = 0; i < n; i++) {
                if (acc[i].accountNo == accNo) {
                    cout << "\nAccount Found!";
                    cout << "\nName    : " << acc[i].name;
                    cout << "\nBalance : " << acc[i].balance << endl;
                }
            }
            break;
        }

        }

    } while (choice != 6);

    return 0;
}