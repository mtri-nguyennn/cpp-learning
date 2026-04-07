#include <iostream>
#include <vector>
using namespace std;


int main (){
    std::vector<int> v2 = {1,2,3,4,5};
    for (int i = 0; i < v2.size(); i++){
        cout << v2[i]<<" ";
    }
    cout<<endl;
    v2.push_back(1905);
    for (int x:v2){
        cout << x <<" ";
    }
    cout<<endl;
    cout<<v2.front();
    cout<<endl;
    v2.pop_back();
    for (int y:v2){
        cout << y << " ";
    }
    return 0;
}   