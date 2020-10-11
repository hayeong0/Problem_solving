#include <iostream>
#include <math.h>
using namespace std;
#define MAX 1000001

int T, N;
int cost[MAX]; 

int main() {
	cin >> T;

	while (T--) {
        cin >> N;
		int max = cost[N];
		long long benefit = 0; 

		for (int i = 1; i <= N; i++) {
			scanf("%d", &cost[i]);
		}

		for (int i = N-1; i > 0; i--) {
            // 최대 주가
			if (max < cost[i]) {
                max = cost[i]; 
            }
            // 최대 이익
			else if (max > cost[i]) {
				benefit += (long long)(max - cost[i]); 
			}
            // 최대 이익 아니면 continue
			else continue; 
		}
        // 최대 이익 출력
		printf("%lld\n", benefit);
	}
}