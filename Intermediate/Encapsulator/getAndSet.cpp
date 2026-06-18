#include <iostream>
using namespace std;

class Student {
    private:
    string name;
    int age;

    public:
    void setName (string name){
        this->name = name;
    }

    void setAge (int age){
        this->age = age;
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }
};

int main(){
    Student s;
    s.setName("Tri Nguyen");
    s.setAge(18);

    cout<<"My name is: "<<s.getName()<<endl;
    return 0;
}