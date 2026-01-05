#include <iostream>
#include <vector>
using namespace std;

// Function to search for an element
bool searchElement(const vector<int>& arr, int target) {
    for (int x : arr) {
        if (x == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    vector<int> arr(size);

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter number to search for: ";
    cin >> target;

    if (searchElement(arr, target)) {
        cout << "Yes, element is in the array.\n";
    } else {
        cout << "No, element is not in the array.\n";
    }

    return 0;
}
