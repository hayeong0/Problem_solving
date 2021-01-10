/* 나이 차이 */

#include <iostream>
using namespace std;

int main() {
    int N = 0, age = 0, max = 0, min = 1000;
    cin >> N;

    while (N--) {
        cin >> age;
        if (age > max) max = age;
        if (age < min) min = age;
    }
    cout << max-min;

    return 0;
}