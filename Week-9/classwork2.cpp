#include <iostream>
#include <vector>
using namespace std;

// Function to search for an element
bool searchElement(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return true;   
        }
    }
    return false;          
}

int main() {
    const int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    // Input array elements
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter number to search for: ";
    cin >> target;

    // Call search function
    if (searchElement(arr, size, target)) {
        cout << "Yes, element is in the array.\n";
    } else {
        cout << "No, element is not in the array.\n";
    }

    return 0;
}
