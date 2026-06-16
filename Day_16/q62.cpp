//maximum frequency of an element
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxFreq = 0;
    int maxElement;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "Maximum frequency element: " << maxElement << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}