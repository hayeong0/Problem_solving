#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string str, tmp;
	vector<string>V;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			V.push_back(tmp);
			tmp = "";
		}
		else
			tmp += str[i];
	}
    
	V.push_back(tmp);
    
	cout << char(V[0][0] - 'a' + 'A');

	for (int i = 1; i < V.size(); i++) {
		if (V[i] != "i" && V[i] != "pa" && V[i] != "te" &&
            V[i] != "ni" && V[i] != "niti" && V[i] != "a" &&
            V[i] != "ali" && V[i] != "nego" && V[i] != "no" && V[i] != "ili") {
                cout << char(V[i][0] - 'a' + 'A');
            }
	}

	cout << endl;
}