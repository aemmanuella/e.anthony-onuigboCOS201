#include <iostream>
using namespace std;

void value(){
    int arr[] = {5, 2, 9, 1, 7};
    int size = 5;

    int min = arr[0];
    int max = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Minimum value is " << min << endl;
    cout << "Maximum value is " << max << endl; 
}

int main(){
    value();
}