#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void hanoi(int n, int start, int to, int by) {
    if (n == 1) printf("%d %d\n", start, to);
    else {
        hanoi(n-1, start, by, to);
        printf("%d %d\n", start, to);
        hanoi(n-1, by, to, start);
    }
}

int main() {
    int n;
    cin >> n;
    cout << (1<<n) -1 << "\n";

    hanoi(n, 1, 3, 2);

    return 0;
}