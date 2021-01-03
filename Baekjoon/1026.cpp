#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N, ans = 0;
	cin >> N;
	vector<int> A;
	vector<int> B;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		A.push_back(a);
	}

	for (int i = 0; i < N; i++) {
		int b;
		cin >> b;
		B.push_back(b);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	for (int i = 0; i < N; i++) {
		ans += A[i] * B[N - 1 - i];
	}


	cout << ans;
}