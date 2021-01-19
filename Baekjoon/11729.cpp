#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<pair<int, int> > v;

void hanoi(int n, int x, int y, int z) {
    if (n == 1) v.push_back(make_pair(x, z));
    else {
        hanoi(n-1, x, z, y);
        v.push_back(make_pair(x, z));
        hanoi(n-1, y, x, z);
    }
}

int main() {
    int n;

    cin >> n;
    hanoi(n, 1, 2, 3);
    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}