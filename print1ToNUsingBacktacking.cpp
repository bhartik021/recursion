#include<bits/stdc++.h>
using namespace std;

void print1ToNUsingBacktacking(int i , int N) {
    if(i < 1) {
        return;
    }
    print1ToNUsingBacktacking(i - 1, N);
    cout << i << endl;
}

int main() {
    int N;
    cin >> N;
    print1ToNUsingBacktacking(N, N);
    return 0;
}