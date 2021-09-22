// BOJ 17412 (https://www.acmicpc.net/problem/17412)
// network flow algorithm

#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
#define MAX 401

int N, P;
vector<int> adj[MAX]; 
int capacity[MAX][MAX], flow[MAX][MAX];

int edmonds(int start, int end) { 
	int res = 0; 
	
	while (1) { 
		int f = 999999999;
		queue<int> q;
        vector<int> flag(N+1, -1);
		q.push(start);

		while (!q.empty()) {
			int x = q.front();  //current
			q.pop();
			
			for (int i = 0; i < adj[x].size(); ++i) {
				int y = adj[x][i];
				if (capacity[x][y] - flow[x][y] > 0 && flag[y] == -1) {
					flag[y] = x;
					q.push(y);
					if (y == end) break;
				}
			}
		}
		
		if (flag[end] == -1) break;
		for (int i = end; i != start; i = flag[i]) {
            f = min(f, capacity[flag[i]][i] - flow[flag[i]][i]);
        }
		for (int i = end; i!=start; i = flag[i]) {
			flow[flag[i]][i] += f;
			flow[i][flag[i]] -= f;
		}
		res += f;
	}
	return res;
}

int main() {
	cin >> N >> P; 

	while (P--) {
		int src, dst;
		cin >> src >> dst;
		
		adj[src].push_back(dst); 
		adj[dst].push_back(src); 
		capacity[src][dst] = 1; 
	}

	cout << edmonds(1, 2); 
}