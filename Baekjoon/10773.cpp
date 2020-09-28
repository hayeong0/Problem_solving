#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
	int K = 0, num = 0, sum = 0;
	stack<int> stack;
	cin >> K;
 
	for (int i = 0; i < K; i++) {
		cin >> num;

		if (num == 0)
			stack.pop();
		else
            stack.push(num);
	}

	for (int i = 0; !stack.empty(); i++) {
		sum += stack.top();
		stack.pop();
	}

	cout << sum << endl;
 
	return 0;
}