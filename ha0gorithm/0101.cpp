/* 1부터 N까지 M의 배수합 */

#include <iostream>
using namespace std;

int main() {
    int N, M, sum = 0;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        if (i % M == 0) sum += i;
    }
    cout << sum << endl;
}