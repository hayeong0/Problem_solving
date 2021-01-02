/* 진약수의 합 */
/*
자연수 n이 주어지면 자연수 n의 진약수의 합을 수식과 함께 출력하는 프로그램 
*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 1;
    cin >> n;
    cout << "1";
    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            cout << " + " << i;
            sum += i;
        }
    }
    cout << " = " << sum << endl;
    return 0;
}