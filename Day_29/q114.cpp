//menu driven array operation system
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int choice;

    do {
        cout << "\n===== ARRAY OPERATIONS =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Maximum\n";
        cout << "3. Find Minimum\n";
        cout << "4. Sum of Elements\n";
        cout << "5. Search Element\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Array: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2: {
                int max = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i] > max)
                        max = arr[i];

                cout << "Maximum = " << max << endl;
                break;
            }

            case 3: {
                int min = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i] < min)
                        min = arr[i];

                cout << "Minimum = " << min << endl;
                break;
            }

            case 4: {
                int sum = 0;
                for (int i = 0; i < n; i++)
                    sum += arr[i];

                cout << "Sum = " << sum << endl;
                break;
            }

            case 5: {
                int key, found = 0;

                cout << "Enter element to search: ";
                cin >> key;

                for (int i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        cout << "Element found at index " << i << endl;
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    cout << "Element not found.\n";

                break;
            }

            case 6:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while (choice != 6);

    return 0;
}