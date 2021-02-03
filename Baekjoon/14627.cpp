#include <iostream>
using namespace std; 

typedef long long ll; 

ll s, c, a[1000004], ret, sum, ret_cnt; 

bool check(ll mid){
	ll cnt = 0;
	for(int i = 0; i < s; i++)cnt += a[i] / mid; 
	return cnt >= c;
}

int main() {
	cin >> s >> c; 

	for(int i = 0; i < s; i++) {
        cin >> a[i], sum += a[i];
    }
        
	ll lo = 1, hi = 1e9; 

	while(lo <= hi) {
		ll mid = (lo + hi) / (1LL * 2); 
		if(check(mid)) {
			lo = mid + 1; 
			ret = mid;
		}
        else hi = mid - 1;
	}   
	cout << sum - ret * c << "\n";
    
    return 0;
}
