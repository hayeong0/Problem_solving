#include <iostream>
using namespace std;
#define MAX 1000000

int D, K;
int A[33];
int B[33];

int main() {
    A[1] = 1, B[2] = 1;

    for (int i = 3; i <= 30; i++) {
        A[i] = A[i - 1] + A[i - 2];
        B[i] = B[i - 1] + B[i - 2];
    }

    cin << D << K;
 
    int a = A[D], b = B[D];

    for (int i = 1; i <= MAX; i++) {
        if ((K - a * i) % b == 0) {
            printf("%d\n", i);
            printf("%d\n", (K - a * i) / b);

        }
    }

    return 0;
}
