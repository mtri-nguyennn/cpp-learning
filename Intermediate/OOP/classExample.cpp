#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        int age;
    void introduce() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

};

int main (){
    Student s1;
    s1.name = "Tri";
    s1.age = 16;
    s1.introduce();
    return 0;
}