#include <iostream>
using namespace std;

class Greetings {
    public:
    virtual void greetingSound () =0;
    virtual ~Greetings(){}
};

class Teacher : public Greetings{
    public:
    void greetingSound() override{
        cout<<"Hello Students"<<endl;
    }
};

class Student : public Greetings{
    public:
    void greetingSound() override{
        cout<<"Hello Teacher"<< endl;
    }
};

int main(){
    Greetings* a = new Teacher;
    a->greetingSound();

    a = new Student;
    a->greetingSound();

    delete a;
    return 0;
}