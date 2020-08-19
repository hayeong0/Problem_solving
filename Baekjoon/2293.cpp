#include <iostream>
using namespace std;

int dp[10001] = {0};  
int coin[101] = {0};  

int main() {
    int n = 0, k = 0;
    dp[0] = 1;
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        cin >> coin[i];
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            if(j-coin[i] >= 0)
                dp[j] += dp[j-coin[i]];
        }
    }
    cout << dp[k];
    
    return 0;
}