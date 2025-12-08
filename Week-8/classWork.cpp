#include <iostream>
using namespace std;

int sub(int num1, int num2){
    int subtract;
    subtract = num1 - num2;
    cout << "The difference between num1 and num2 is " << subtract << endl;
    return subtract;
}

int add(int num1, int num2){
    int addition;
    addition = num1 + num2;
    cout << "The addition of num1 and num2 is " << addition << endl;
    return addition;
}

int multiplication(int num1, int num2){
    int mult;
    mult = num1 * num2;
    cout << "The product of num1 and num2 is " << mult << endl;
    return mult;
}

int division(int num1, int num2){
    int div;
    div = num1 / num2;
    cout << "The division of num1 by num2 is " << div << endl;
    return div;
}

int modulo (int num1, int num2){
    int mod;
    mod = num1 % num2;
    cout << "The modulus of num1 and num2 is " << mod << endl;
    return mod;
}

int main(){
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    
    sub(a , b);
    add(a , b);
    multiplication(a , b);
    division(a , b);
    modulo(a , b);

}