#include <iostream>
using namespace std;


int factorial (int x){
    int result = 1;
    for (int i = 1; i <= x; i++){
        result  = result * i;
    }
    return result;
}

int main (){
    int y, f;
    cout << "Enter your number: ";
    cin >> y;
    f = factorial(y);
    cout << f << endl;
    return 0;
}

