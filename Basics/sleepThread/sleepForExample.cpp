#include <iostream>
#include <thread>
using namespace std;

int main()
{
    cout<<"Starting countdown...";
    for (int i =10; i>0; --i){
        cout<<i<<endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout<<"lift off!\n";
    return 0;
}