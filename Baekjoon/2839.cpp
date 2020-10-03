#include <iostream>
using namespace std;

int main() {
    int N = 0;
    cin >> N;
    int cnt = 0;
    
    while(1) {
        if (N%5 == 0) {
            cnt += N/5;
            cout << cnt << endl;
            break;
        }

        N = N-3;
        cnt ++;

        if(N < 0) {
            cout << "-1" << endl;
            break;
        }
    }
}


