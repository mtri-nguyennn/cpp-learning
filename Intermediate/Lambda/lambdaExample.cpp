#include <iostream>
using namespace std;

int main (){
    auto greeting = [](){
        cout<<"Hello World"<<endl;
    };

    greeting();


    auto multiply = [] (int a, int b){
        return a*b;
    };
    cout<<multiply(3,5)<<endl;

    return 0;
}