#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
    int N, sum = 0;
    cin >> N;
 
    int A[50];
    int B[50];
    int check[50] = {0, };
 
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
 
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
 
    check[N] = {0, };
    sort(A, A+N);
    
    for (int i = 0; i < N; i++) {
        int tmp = 0;
        int idx = 0;
        for (int i = 0; i < N; i++) {
            if (tmp < B[i] && check[i] == 0) {
                tmp = B[i];
                idx = i;
            }
        }
        check[idx] = 1;
        sum += A[i]*tmp;
    }
 
    cout<<sum;
 
    return 0;
}
