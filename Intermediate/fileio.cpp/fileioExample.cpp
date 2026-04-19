#include <iostream>
#include <fstream>
using namespace std;

int main (){
    ofstream fout("input.txt");
    if (!fout){
        cout << "Cannot find"<< endl;
        return 1;
    }
    cout << "file opened"<< endl;
    fout << "Tri Nguyen\n";
    fout.close();

    
    return 0;
}