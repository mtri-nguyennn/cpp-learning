#include <iostream>
#include <map>
using namespace std;

int main(){
    map <string,int> student;
    student["Minh Tri"] = 11;
    cout << student["Minh Tri"]<<endl;
    return 0;
}