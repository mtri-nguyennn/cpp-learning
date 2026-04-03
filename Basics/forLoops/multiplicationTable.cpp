#include <iostream>
#include <thread>
using namespace std;


void mutipleTable (int x){
    int result = 1;
    for (int i = 1; i <= 10 ; i++){
        result = x * i;
        cout << x << " * " << i << " = "<< result << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}

int main (){
    int y;
    cout<<"Enter your number: ";
    cin >> y;
    mutipleTable(y);
    return 0;
}