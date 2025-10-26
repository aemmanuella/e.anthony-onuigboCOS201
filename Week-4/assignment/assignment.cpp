#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;


int main(){
    srand(time(0));

    string name;
    bool isPAU;
    int course;
    int location;
    int lodgingCost;
    int days;
    int regFee;
    int lodgingPerDay;
    int total;
    string courseName;
    int discount1 = 0;
    int discount2 = 0;
    int promo = 0;

    cout << "S/N | Course          | Days | Registeration (N)" << endl;
    cout << "1   | Photography     | 3    | 10,000 " << endl;
    cout << "2   | Painting        | 5    | 8,000 " << endl;
    cout << "3   | Fish Farming    | 7    | 15,000 " << endl;
    cout << "4   | Baking          | 5    | 13,000 " << endl;
    cout << "5   | Public Speaking | 2    | 5,000 " << endl;
    cout << "" << endl;
    cout << "S/N | Location     | Lodging/Day(N) " << endl;
    cout << "1   | Camp House A | 10,000 " << endl;
    cout << "2   | Camp House B | 2,500 " << endl;
    cout << "3   | Camp House C | 5,000 " << endl;
    cout << "4   | Camp House D | 13,000 " << endl;
    cout << "5   | Camp House E | 5,000 " << endl;

    cout << "" << endl; 

    cout << "Enter your full name: " << endl;
    getline(cin, name);
    cout << "Are you a PAU student?(1=Y/0=N) " << endl;
    cin >> isPAU;
    cout << "Enter course of choice (1 - 5): " << endl;
    cin >> course;
    cout << "Enter location of choice (1 - 5): " << endl;
    cin >> location;
    
    if (course == 1){
        days = 3;
        regFee = 10000;
        courseName = "Photography";
    }
    else if (course == 2){
        days = 5;
        regFee = 8000;
        courseName = "Painting";
    }
    else if (course == 3){
        days = 7;
        regFee = 15000;
        courseName = "Fish Farming";
    }
    else if (course == 4){
        days = 5;
        regFee = 13000;
        courseName = "Baking";
    }
    else if (course == 5){
        days = 2;
        regFee = 5000;
        courseName = "Public Speaking";
    }
    else {
        cout << "Invalid input." << endl;
    }
    
    if (location == 1){
        lodgingPerDay = 10000;
    }
    else if (location == 2){
        lodgingPerDay = 2500;
    }
    else if (location == 3){
        lodgingPerDay = 5000;
    }
    else if (location == 4){
        lodgingPerDay = 13000;
    }
    else if (location == 5){
        lodgingPerDay = 15000;
    }
    else{
        cout << "Invalid input" << endl;
    }

    lodgingCost = lodgingPerDay * days;
    total = regFee + lodgingCost;

    if (isPAU && (location == 2 || location == 3)){
        discount1 = 0.05 * lodgingCost;
        lodgingCost = lodgingCost - discount1;
    }

    if ((days > 5) || (regFee > 12000)){
        discount2 = 0.03 * regFee;
        regFee = regFee - discount2;
    }

    int num1 = rand() % 101;
    if (num1 == 7 || num1 == 77){
        promo = 500;
        total = total - promo;
    }

    
    cout << "" << endl;
    cout << "Name: " << name << " (PAU student: " << (isPAU ? "Yes" : "No") << ")" << endl;
    cout << "Course: " << courseName << "   Days: " << days << endl;
    cout << "Registeration: N" << regFee << " (reg discount: N" << discount2 << ")" << endl;
    cout << "Lodging: N" << lodgingCost << " (lodging discount: N" << discount1 << ")" << endl;
    cout << "Random draw: " << num1 << "    Promo applied: N" << promo << endl;
    cout << "TOTAL: N" << total << endl; 
    

   return 0;
}