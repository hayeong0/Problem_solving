#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // M: 사대 수, N: 동물 수, L: 사정거리
    int M = 0, N = 0, L = 0;
    int xpos = 0, ypos = 0;
    vector<int>v;
    int animal = 0;

    cin >> M >> N >> L;

    while(M--) {
        int pos = 0;
        cin >> pos;
        v.push_back(pos);
    }
    sort(v.begin(), v.end());

    while(N--) {
        cin >> xpos >> ypos;
        // 사정거리보다 멀면 패스
        if (L < ypos) continue;
        
        int upper_bound = xpos+L-ypos;
        int lower_bound = xpos+ypos-L;
        int high = v.size()-1;
        int low = 0;

        while (low <= high) {
            int mid = (low + high)/2;
            if (lower_bound <= v[mid] && v[mid] <= upper_bound) {
                animal++;
                break;
            }
            else if (v[mid] < lower_bound) low = mid+1;
            else high = mid-1;
        }
    }
    cout << animal << endl;
}