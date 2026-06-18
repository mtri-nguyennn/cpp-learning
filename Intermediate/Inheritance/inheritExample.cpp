#include <iostream>
using namespace std;

class Person {
    public:
    string name;
    int age;

    void sayHi(){
        cout<<"My name is " <<name<<endl;
    }
};

class Student : public Person{
    string major;
};

int main(){
    Student s;
    s.name = "Tri Nguyen";
    s.sayHi();
    
    return 0;
}