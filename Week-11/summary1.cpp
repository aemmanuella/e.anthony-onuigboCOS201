#include <iostream>
using namespace std;

void concatentate(){
    char s1[] = "First";
    char s2[] = " Name";

    cout << strcat(s1, s2) << endl;
}

void nconctatenate(){
    char s1[] = "First";
    char s2[] = " Name";

    cout << strncat(s1, s2, 3) << endl;
}

void convert(){
    char s1[] = "300";
    char s2[] = "20.2";

    cout << atoi(s1) << endl;
    cout << atof(s2) << endl;
}

int main(){
    concatentate();
    nconctatenate();
    convert();

}