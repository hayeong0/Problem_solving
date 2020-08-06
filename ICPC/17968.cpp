#include <iostream>
using namespace std;
 
int arr[1001] = {1, 1};

int main() {
    int input = 0, val = 0, k = 0;
    cin >> input;

    for (int i = 2; i < 1001; i++) {
        val = 1;
        while (1) {
            arr[i] = val;
            k = 1;

            while (1) {
                if (i-2*k < 0) break;
                if (arr[i] - arr[i-k] == arr[i-k] - arr[i-2*k]) break;
                k++;
            }

            if (i-2*k < 0) break;
            else
                val++;
        }
    }
    
    cout << arr[input] << "\n";
}