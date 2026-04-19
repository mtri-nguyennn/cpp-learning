#include <iostream>
#include<string>
#include <fstream>
using namespace std;

struct studentProfile {
    string name;
    int age;
    string hobby;
};

int main (){
    studentProfile p;
    ifstream fin ("input.txt");
    fin >> p.name >> p.age >> p.hobby;

    cout << "Name: " << p.name << "\n";
    cout << "Age: " << p.age << "\n";
    cout << "Hobby: " << p.hobby << "\n";
    
    fin.close();
    return 0;
}