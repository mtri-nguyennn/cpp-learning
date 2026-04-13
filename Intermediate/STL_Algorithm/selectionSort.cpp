#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {5,3,6,8,2};
    sort(v1.begin(),v1.end());
    
    for (int x : v1){
        cout << x << " ";
    }

    cout<<endl;

    for (int i = 0; i < (v1.size()-1); i++){
        for (int j = i+1; j < v1.size(); j++){
            if(v1[j]<v1[i]){
                int temp = v1[i];
                v1[i] = v1[j];
                v1[j] = temp;
            }
        }
    }
    for (int x : v1){
        cout << x << " ";
    }
    cout<<endl;
    return 0;
}