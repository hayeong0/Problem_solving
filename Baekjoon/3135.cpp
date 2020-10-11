// 백준 3135번
#include <iostream>
#include <math.h>
using namespace std;

int A, B, N, day;
int main() {
    int min = 1000;
    cin >> A >> B >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> day;

        if (abs(B-day) < min) {
            min = abs(B-day);
        }
    }

    day = min;

    if (day+1 < abs(B-A)) {
        min = (day+1);
    }
    else 
        min = abs(B-A);

    cout << min << endl;
}