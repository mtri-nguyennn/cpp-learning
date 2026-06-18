#include <iostream>
#include<set>
using namespace std;


int main (){
    set<int> s;


    s.insert(1);
    s.insert(19);
    s.insert(11);
    s.insert(13);
    s.insert(15);
    s.insert(1);

    for (int x : s){
        cout<<x<<" ";
    }
    
    //Find value
    if (s.count(11)){
        cout <<endl<< "Found"<<endl;
    }

    return 0;
}
