#include <iostream>
using namespace std;

void sorting (int arr[], int n){
    for (int* i = arr; i < arr + n -1; i++){
        for (int* j = i+1; j < arr + n; j++){
            if (*i > *j){
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = 5;

    sorting(arr, n);

    for (int* p = arr; p < arr + n; p++) {
        cout << *p << " ";
    }
    return 0;
}