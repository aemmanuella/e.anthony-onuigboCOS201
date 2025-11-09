#include <iostream>
using namespace std;

int main(){
    int i = 10;
    int sum = 0;
    
    do {
        sum = sum + i;
        cout << "when i = "<< i << " ";
        cout << "sum = "<< sum << "\n";
        i++;
    }while (i < 10);
}