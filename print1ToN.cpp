#include<bits/stdc++.h>
using namespace std;

void print1ToN(int i, int N) {
    if(i > N) {
        return;
    }
    cout << i << endl;
    print1ToN(i + 1, N);
}

int main() {
    int N;
    cin >> N;
    print1ToN(1, N);
    return 0;
}