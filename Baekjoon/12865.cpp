#include <iostream>
#include <algorithm>
using namespace std;

int w[101]; // Weight; W(1 ≤ W ≤ 100,000)
int v[101]; // Value;  V(0 ≤ V ≤ 1,000)
int dp[101][100001];
int N, K; // input N: num of item, K: limit weight

int main() {
	ios::sync_with_stdio(0);
    
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> w[i] >> v[i];
	}
    
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= K; j++) {
            // i번째 물건을 넣을 수 있을 때
			if (j - w[i] >= 0) { 
                // 넣지 않을 때와 넣었을 때, 둘 중 더 큰 것으로 초기화
				dp[i][j] = max(dp[i-1][j], dp[i - 1][j - w[i]] + v[i]);   
			}
            // i번째 물건을 넣을 수 없으면, 배낭 용량은 같고 넣지 않았을 때의 값으로 초기화
            else { 
                dp[i][j] = dp[i-1][j];
            }
		}
	}

	cout << dp[N][K] << endl;
	return 0;
}