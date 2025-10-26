#include <iostream>
using namespace std;

int main(){
    int num1;
    
    cout << "Enter any integer number: ";
    cin >> num1;

    if (num1 % 5 == 0){
        cout << "HiFive" << endl;
    }

    if (num1 % 2 == 0){
        cout << "HiEven";
    }
    
    return 0;
}