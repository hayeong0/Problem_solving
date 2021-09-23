// BOJ 2231 (https://www.acmicpc.net/problem/2231)

#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 1; i < N; i++) {
        int tmp = i;
        int flag = i;
        
        while (tmp > 0) {
            flag += tmp % 10;
            tmp /= 10;
        }    
        if (flag == N) {
            cout << i;
            N = 0;
            break;
        }
    }   
    if (N != 0)
        cout << "0"; 
}