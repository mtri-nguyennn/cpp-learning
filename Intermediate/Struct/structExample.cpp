#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    double gpa;
};

int main (){
    Student a;
    a.age = 16;
    a.gpa = 85.5;
    a.name = "tri";
    return 0;
}