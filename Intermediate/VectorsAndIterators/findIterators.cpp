#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    vector<int> v = {10, 20, 30, 40};
    auto it = find(v.begin(), v.end(), 30);

    if (it != v.end()){
        cout << "found " << *it << endl;
    }
    else{
        cout << "Not found" << endl;
    }
    return 0;
}