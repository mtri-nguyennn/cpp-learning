#include <iostream>
using namespace std;

void updateValue(int& x){
    x = x + 19;
}

int main (){
    int a = 11;
    updateValue(a);
    cout<<a<<endl;
    return 0;
}