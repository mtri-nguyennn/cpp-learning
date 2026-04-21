#include <iostream>
using namespace std;

class Student{
    public:
    int age;
    string name;

    Student (string n, int a){
        name = n;
        age = a;
    }

    void introduce() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Tri", 21);
    s1.introduce();

    return 0;
};