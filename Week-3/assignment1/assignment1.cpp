#include <iostream>
using namespace std;

int main(){
    double num1;
    double num2;
     
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    double product = num1 * num2;
    double sum  = num1 + num2;
    double diff = num1 - num2;
    
    cout << "The product is " << product << ". " << endl; 
    cout << "The sum is " << sum << ". " << endl;
    cout << "The difference between num1 and num2 is: " << diff << ". ";

    return 0;
}