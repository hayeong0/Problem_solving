#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n, x, max(0);
    cin >> n;
 
    stack<int> s;

    while (n--) {
        cin >> x;
        if (x > max) {
            for (int i = max+1; i <= x; i++) {
                s.push(i);
                cout << "+\n";
            }
        }
        else
            if (s.top() != x) {
                std::cout << "NO";
                return 1;
            }
        s.pop();
        std::cout << "-\n";
        if (max < x) max = x;
    }
 
    return 0;
}
