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

    size_t pos = s1.find("W");
        if (pos != string::npos) {
        cout << "Found At: " << pos << endl;
    } else {
        cout << "Not Found" << endl;
    }
    return 0;
}