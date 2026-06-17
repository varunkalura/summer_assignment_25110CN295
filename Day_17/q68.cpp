//find common elements
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    unordered_set<int> s;

    for (int x : arr1) {
        s.insert(x);
    }

    cout << "Common Elements: ";

    for (int x : arr2) {
        if (s.find(x) != s.end()) {
            cout << x << " ";
        }
    }

    return 0;
}