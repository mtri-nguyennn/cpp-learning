#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    vector<int> a = {1,3,5,2,9};
    sort (a.begin(), a.end());

    for (int x : a){
        cout << x << " ";
    }
    return 0;
}