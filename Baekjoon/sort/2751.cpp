//백준 2751

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>&v, int start, int mid, int end);
void mergeSort(vector<int>&v, int start, int end);

int main() {
	vector<int> v;
	int n;
	cin >> n;

	for (int i = 0,t = 0; i < n; i++) {
		cin >> t;
		v.push_back(t);
	}
    
	mergeSort(v, 0, n-1);
	for (int i = 0; i < n; i++) cout << v[i] << '\n';

	return 0;
}

void merge(vector<int>&v, int start, int mid, int end) {
	int i = start, j = mid + 1, t = 0;
	int *temp = new int[(end-start) + 1];

	while (i <= mid && j <= end) {
		if (v[i] <= v[j]) temp[t++] = v[i++];
		else temp[t++] = v[j++];
	}

	// end of sorting ( ~ mid )
	if(i > mid) {
        for(int k = j; k <= end; k++, t++) temp[t] = v[k];
    }
	else {
        for(int k = i; k <= mid; k++, t++) temp[t] = v[k];
    }

	for (int i = start, k = 0; i <= end; i++, k++) v[i]=temp[k];
	delete[] temp;
}

void mergeSort(vector<int>&v, int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		mergeSort(v, start, mid);
		mergeSort(v, mid + 1, end);
		merge(v, start, mid, end);
	}
}