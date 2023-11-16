#include<bits/stdc++.h>
using namespace std;

void printNTo1(int i, int N) {
    if(i < 1) {
        return;
    }
    cout << i << endl;
    printNTo1(i - 1, N);
}

int main() {
    int N;
    cin >> N;
    printNTo1(N, N);
    return 0;
}