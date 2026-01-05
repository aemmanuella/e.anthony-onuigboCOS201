#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int students;

    cout << "Enter total number of students: ";
    cin >> students;

    vector<int> scores(students);
    vector<string> grades(students);

    for(int i = 0; i < students; i++){
        cout << "\nEnter score for student " << i + 1 << ": ";
        cin >> scores[i];
    }

    int maxValue = *max_element(scores.begin(), scores.end());


    for(int i = 0;  i < students; i++){

        if(scores[i] >= maxValue - 10){
            grades[i] = "A";
        }
        else if(scores[i] >= maxValue - 20){
            grades[i] = "B";
        }
        else if(scores[i] >= maxValue - 30){
            grades[i] = "C";
        }
        else if(scores[i] >= maxValue - 40){
            grades[i] = "D";
        }
        else{
            grades[i] = "F";
        }
    }


    for(int i = 0;  i < students; i++){
        cout << "\nStudent " << i + 1 << " score is " << scores[i] << " and grade is " << grades[i];
    }

    
}