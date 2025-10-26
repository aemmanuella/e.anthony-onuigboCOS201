#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
   int num1 = rand() % 10;
   int num2 = rand() % 10;

   if (num1 < num2){
    int temp = num1;
    num1 = num2;
    num2 = temp; 
   }

   int answer; 
   cout << "What is number1 - number2? ";
   cin >> answer;

   if (answer == num1 - num2){
    cout << "You are correct.";
   }
   if (answer != num1 - num2){
    cout << "Answer is incorrect.";
   }

    return 0;
}