/* 자연수의 합 */
/* 
    입력: 자연수 A, B
   출력: A ~ B 사이의 값 수식과 합
*/

#include <iostream>
using namespace std;

int main() {
    int i, A, B, sum = 0;
    cin >> A >> B;

    for (i = A; i < B; i++) { 
        cout << i << " + ";
        sum += i;
    }
    cout << i << " = " << sum+i << endl;
}