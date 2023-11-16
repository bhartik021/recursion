#include<bits/stdc++.h>
using namespace std;

void printNTo1UsingBacktacking(int i, int N) {
    if(i > N) {
        return;
    }
    printNTo1UsingBacktacking(i + 1, N);
    cout << i << endl;
}

int main() {
    int N;
    cin >> N;
    printNTo1UsingBacktacking(1, N);
    return 0;
}