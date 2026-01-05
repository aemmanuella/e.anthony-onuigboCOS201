#include <iostream>
using namespace std;

int binarySearch(const int list[], int key, int arraySize){
    int low = 0;
    int high = arraySize - 1;

    while(low <= high){
        int mid = (low + high)/2;
        if(list[mid] == key){
            return mid;
        }
        else if (key < list[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return -1;
}

int main(){
    int list[] = {2, 4, 5, 6, 8, 10, 12};
    int i = binarySearch(list, 2, 7);
    int j = binarySearch(list, 7, 7);
    int k = binarySearch(list, 12, 7);
    cout << "Locations of 2, 7 and 12 are " << i << ", " << j << " and " << k << endl;

    return 0;
}