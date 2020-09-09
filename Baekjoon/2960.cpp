#include <iostream>
using namespace std;
int arr[1001];

int main() {
    int N = 0, K = 0, cnt = 0;
	cin >> N >> K;

	for (int i = 2; i <= N; i++) {
		if (arr[i] == 0) {
			for (int j = 1; j * i <= N; j++) {
				if (arr[j * i] == 0) {
					arr[j * i] = 1;
					cnt++;
				}

				if (cnt == K) {
					printf("%d\n", i*j);
					return 0;
				}
			}
		}
	}
	return 0;
}