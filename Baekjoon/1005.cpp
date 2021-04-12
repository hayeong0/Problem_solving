/* BOJ 1005 */

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int T;
    cin >> T;
    while (T--) {
        // N: 건물 갯수, K: 생성 규칙, W: 건설해야 할 건물 번호
        int N, K, W;
        int time[1000] = {0}, pre[1000] = {0}, result[1000] = {0};
        queue<int> q;
        vector<int> rule[1001];

        cin >> N >> K;

        for (int j = 0; j < N; j++)
            cin >> time[j];

        for(int t = 0; t < K; t++) {
            int x, y;
            cin >> x >> y;
            rule[x-1].push_back(y-1);
            pre[y-1]++;
        }
        cin >> W;
        W--;
 
        // 선행자 없는 노드를 큐에 먼저 push
        for (int j = 0; j < N; j++) {
            if(!pre[j]) 
                q.push(j);
        }
            
        // 선행자가 있다는 의미
        while (pre[W] > 0) {
            int num = q.front();
            q.pop();
            
            for(int i : rule[num]){
                result[i] = max(result[i], result[num]+time[num]);
                if(--pre[i] == 0) q.push(i);
            }
        }
        cout << result[W]+time[W] << '\n';
    }
}

