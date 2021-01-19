#include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>
// #include <vector>
using namespace std;

string check(const string& s) {
	int idx = -1;
	for (int i = s.size() - 1; i >= 0 && idx == -1; i--) if (s[i] != ' ') idx = i;
	return string(s.begin(), s.begin() + idx + 1);
}

int main() {
	int n; 
    cin >> n;
	vector<string> v = { "*" };
    
	for (int i = 0; i < n; i++) {
		for (int j = 0, s = v.size(); j < s; j++) {
			v.push_back(v[j] + string(v[j].size(), ' '));
			v[j] = v[j] + v[j];
		}
	}
	for (auto s : v) cout << check(s) << '\n';
}