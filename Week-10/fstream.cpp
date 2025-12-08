#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    //ios::out ==> write mode
    //ios::in ==> read mode
    //ios::append ==> append mode
    //ios::trunc ==> erase file before writing

    fstream file("data.txt", ios::out);
    file << "Adding a new line. \n";
    file.close();

    cout << "DONE.\n";
}