#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    long long num;
    int count = 0;
    cin >> n;

    map<long long, int> m;

    while (n--) {
        long long num;
        cin >> num;
        m[num] += 1;
    }

    for (auto p : m) {
        if (count < p.second) {
            num = p.first;
            count = p.second;
        }
        else if (count == p.second && num > p.first)
            num = p.first;
    }
    cout << num << "\n";

    return 0;
}