/*  백준 1049.cpp 
    Greedy algorithm  */

#include <iostream>
using namespace std;

int main() {
	int N = 0, M = 0, x = 0, y = 0;
    int set = 1000, single = 1000;
    cin >> N >> M;

	while(M--) {
        cin >> x >> y;
        if (set > x) set = x;
        if (single > y) single = y;
	}
	cout << min((N/6+1)*set, min(N/6*set + N%6*single, N*single)) << '\n';
}
