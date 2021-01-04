#include <bits/stdc++.h>
using namespace std;

int input;
stack <int> st;
int arr[80005];

int main() {
    cin >> input;
    for (int i = 0; i < input; i++) {
        cin >> arr[i];
    }

    long long ans = 0;
    for (int i = 0; i < input; i++) {
        while (!st.empty() && st.top() <= arr[i]) st.pop();
    
        st.push(arr[i]);
        ans += st.size() - 1;
    }

    cout << ans;
}