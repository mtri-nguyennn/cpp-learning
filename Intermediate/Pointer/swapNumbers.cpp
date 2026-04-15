#include <iostream>
using namespace std;

int swapNum(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 12;
    int y = 11;
    swapNum(&x,&y);
    cout<<x<<" "<<y<<endl;
    return 0;
}