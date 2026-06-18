#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Student {
    string name;
    int grade;
};

int main (){
vector<Student> s = {
    {"Hien ", 70},
    {"Tri ", 60},
    {"Triet ", 90},
    {"Thinh", 80}
};

sort(s.begin(), s.end(), [](Student a, Student b){
    return a.grade> b.grade;
});

for (Student x : s){
    cout<<x.name<<endl;
}
return 0;

}