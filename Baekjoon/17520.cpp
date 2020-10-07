#include <iostream>
using namespace std;
#define MOD 16769023

int N, x, y, a, b;

int main() {
    y = 2;
    cin >> N;

    for (int i = 1; i < N; i++) {
        b = (x * 2) % MOD;
        a = y;
        x = a;
        y = b;
    }

    cout << (x + y) % MOD << '\n';

    return 0;
}
