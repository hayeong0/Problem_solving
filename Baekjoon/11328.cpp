#include <iostream>
using namespace std;
 
int main() {
	int N = 0, arr[30];
	bool check;
	string s1, s2;

	scanf("%d", &N);
 
	for (int i = 0; i < N; i++) {
		cin >> s1 >> s2;
		check = true;

		fill(arr, arr + 30, 0);

		for (int j = 0; j < s1.length(); j++) {
			arr[s1[j] - 'a']++;
			arr[s2[j] - 'a']--;
		}

		for (int j = 0; j < 30; j++) {
			if (arr[j] != 0) {
				check = false;
				break;
			}
		}

		if (check) cout << "Possible\n";
		else cout << "Impossible\n";
	}
 
	return 0;
}