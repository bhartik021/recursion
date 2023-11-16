#include<bits/stdc++.h>
using namespace std;

void printNameFunction(int i, int n) {
    if(i > n) {
        return;
    }
    cout << "Bharti" << endl;
    printNameFunction(i + 1, n);
}

int main() {
    int n;
    cin >> n;
    printNameFunction(1, n);
    return 0;
}