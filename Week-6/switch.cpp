#include <iostream>
using namespace std;

int main(){
    int day;
    
    cout << "Enter the day ====> ";
    cin >> day;

    switch(day){
        case 1:
            cout << "Weekday";
            break;
        case 2:
            cout << "Weekday";
            break;
        case 3:
            cout << "Weekday";
            break;
        case 4:
            cout << "Weekday";
            break;
        case 5:
            cout << "Weekday";
            break;
        case 0:
            cout << "Weekend";
            break;
        case 6:
            cout << "Weekend";
            break;
        default:
            cout << "Not a day.";
            break;
    }
    //if(day == 1){
    //    cout << "Weekday \n";
    //}
    //else if(day == 2){
    //    cout << "Weekday \n";
    //}
    //else if(day == 3){
    //    cout << "Weekday \n";
    //}
    //else if(day == 4){
    //    cout << "Weekday \n";
    //}
    //else if(day == 5){
    //    cout << "Weekday \n";
    //}
    //else if (day == 0){
    //    cout << "Weekend \n";
    //}
    //else if (day == 6){
    //    cout << "Weekend \n";
    //}
    //else{
    //    cout << "Not a day \n";
    //}
}