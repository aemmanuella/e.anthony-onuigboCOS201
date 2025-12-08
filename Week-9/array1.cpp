#include <iostream>
using namespace std;

int main(){
    const int size = 5;

    int arr[size] = {1, 3, 4, 5, 6};
    for (int i = 0; i <= size -1; i++){
        cout << arr[i] << endl;
    }

    return 0;
}