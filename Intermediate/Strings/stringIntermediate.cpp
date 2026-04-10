#include <iostream>
#include <string>
using namespace std;

int main (){
    string s1 = "Hello World!";
    cout<<s1[1]<<endl;
    cout<<s1.length()<<endl;

    for (char x:s1){
        cout<<x<< " ";
    }

    cout<<endl;

    string subs = s1.substr(6,6);
    cout<<subs<<endl;

    
    return 0;
}