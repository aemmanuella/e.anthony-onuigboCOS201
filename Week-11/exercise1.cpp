#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

void findNumber(){
    int arr[] = {2, 3, 1, 5, 6, 9, 6, 8};
    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < 8; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i = 1; i < 8; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "The largest number is " << max << endl;
    cout << "The smallest number is " << min << endl;
}

void generateRandom(int array[], int size){
    srand(time(0));
    for(int i = 0; i < size; i++){
        array[i] = rand() % 21;
    }
}

int linearSearch(int list[], int key, int arraySize){
    for(int i = 0; i < arraySize; i++){
        if(key == list[i]){
            return i;
        }
    }

    return -1;
}

int sum(){
    float array[10] = {35.0, 88.5, 76.0, 77.0, 92.0, 58.0, 45.5, 67.5, 84.0};
    float sum = 0.0;
    for (int i = 0; i < 10; i++){
        sum += array[i];
    }
    
    cout << "The total sum of the elements in the array is " << sum << endl;
    cout << "\n";

    return 0;
}

int main(){
    int key;
    int list[] = {2, 4, 1, 0, 6, 8};

    cout << "------Number 1-------" << endl;
    cout << "What element are you looking for?(-1 = value doesn't exist) " << endl;
    cin >> key;

    int i = linearSearch(list, key, 6);
    cout << "The Location of " << key << " is " << i << "." << endl;

    cout << "\n------Number 2-------" << endl;
    const int size = 8;
    int numbers[size];
    generateRandom(numbers, size);

    for(int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }

    cout << "\n";
    cout << "\n------Number 3-------" << endl;
    findNumber();

    cout << "\n------Number 4-------" << endl;
    sum();

    return 0;
}