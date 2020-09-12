#include <iostream>
#include <cstdio>

using namespace std;

int player[1001][2];
int dp[1001][16][16];
int N;

int main() {
    int white = 0, black = 0;
    int idx = 0;

	while (scanf("%d %d", &white, &black) == 2) {
		player[idx][0] = white;
		player[idx++][1] = black;
	}

	N = idx;
	cout << dfs(0, 0, 0) << "\n";

	return 0;
}