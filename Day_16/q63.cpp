//find pair with givem sum
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: "
                     << arr[i] << " " << arr[j] << endl;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found)
        cout << "No pair found";

    return 0;
}