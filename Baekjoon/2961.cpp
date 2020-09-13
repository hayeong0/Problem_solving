#include <iostream>
#include <algorithm>
#include <math.h>
 
using namespace std;
 
int N;
int x[11];
int y[11];
 
// 첫째 줄에 신맛과 쓴맛의 차이가 가장 작은 요리의 차이를 출력

long solve(int pos, long sour, long bit, int cnt) {
    if (pos == N) {
        if (cnt == 0) return 2e9;
        return abs(sour - bit);
    }
 
    else return min(solve(pos + 1, sour * x[pos + 1], bit + y[pos + 1], cnt+1), solve(pos + 1, sour, bit, cnt));
}
 
int main() {
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        cin >> x[i] >> y[i];
    }

    cout << solve(0, 1, 0, 0) << endl;
 
    return 0;
}
