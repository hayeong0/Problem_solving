/*  백준 1049.cpp 
    Greedy algorithm  */

#include <iostream>
using namespace std;

int main() {
	int N = 0, M = 0, x = 0, y = 0;;     //x: package, y: single charge
    int set = 1000, single = 1000;
    cin >> N >> M;

	while(M--) {
        cin >> x >> y;
        // 입력받은 값들 중 가장 저렴한 가격을 넣어준다
        set = min(set, x);
        single = min(single, y);
	}
	cout << min(N/6+1*set, min(N/6*set + N%6*single, N*single)) << '\n';
}