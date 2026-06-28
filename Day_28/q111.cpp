//ticket booking system
#include <iostream>
using namespace std;

struct Ticket {
    int ticketNo;
    string name;
    string destination;
    bool booked;
};

int main() {

    Ticket t[100];
    int n = 0, choice;

    do {
        cout << "\n------ Ticket Booking System ------";
        cout << "\n1. Add Ticket";
        cout << "\n2. Display Tickets";
        cout << "\n3. Book Ticket";
        cout << "\n4. Cancel Ticket";
        cout << "\n5. Search Ticket";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Ticket Number: ";
            cin >> t[n].ticketNo;
            cin.ignore();

            cout << "Enter Passenger Name: ";
            getline(cin, t[n].name);

            cout << "Enter Destination: ";
            getline(cin, t[n].destination);

            t[n].booked = false;
            n++;

            cout << "Ticket Added Successfully!\n";
            break;

        case 2:
            cout << "\nTicket Details\n";
            for (int i = 0; i < n; i++) {
                cout << "\nTicket No : " << t[i].ticketNo;
                cout << "\nPassenger : " << t[i].name;
                cout << "\nDestination : " << t[i].destination;
                cout << "\nStatus : ";

                if (t[i].booked)
                    cout << "Booked";
                else
                    cout << "Available";

                cout << "\n";
            }
            break;

        case 3: {
            int no;
            cout << "Enter Ticket Number: ";
            cin >> no;

            for (int i = 0; i < n; i++) {
                if (t[i].ticketNo == no) {
                    if (!t[i].booked) {
                        t[i].booked = true;
                        cout << "Ticket Booked Successfully!\n";
                    } else {
                        cout << "Ticket Already Booked!\n";
                    }
                }
            }
            break;
        }

        case 4: {
            int no;
            cout << "Enter Ticket Number: ";
            cin >> no;

            for (int i = 0; i < n; i++) {
                if (t[i].ticketNo == no) {
                    if (t[i].booked) {
                        t[i].booked = false;
                        cout << "Ticket Cancelled Successfully!\n";
                    } else {
                        cout << "Ticket is not Booked!\n";
                    }
                }
            }
            break;
        }

        case 5: {
            int no;
            cout << "Enter Ticket Number: ";
            cin >> no;

            for (int i = 0; i < n; i++) {
                if (t[i].ticketNo == no) {
                    cout << "\nTicket Found!";
                    cout << "\nPassenger : " << t[i].name;
                    cout << "\nDestination : " << t[i].destination;
                    cout << "\nStatus : ";

                    if (t[i].booked)
                        cout << "Booked";
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