#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortAscending(vector<int>& v) {
    sort(v.begin(), v.end());
}

int main() {
    vector<int> a = {5, 2, 8, 1, 4};
    sortAscending(a);

    for (int x : a) {
        cout << x << " ";
    }
}