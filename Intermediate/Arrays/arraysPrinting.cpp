#include <iostream>
#include <array>
using namespace std;

void printarray(int arg[], int length){
    for (int i = 0; i < length; i++){
        cout<<arg[i]<<" ";
    }
}

int main (){
    int arr [5] = {19, 05, 12, 11, 1008};
    printarray(arr,5);
    return 0;
}
