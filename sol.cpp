#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int cnt = 0;
	// in this problem, ignore the first and last values
	for (int i = 1; i < n - 1; i++) {
		// check if the number is greater than or less than both of its neighbors
		if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
			cnt++;
		} else if (a[i] < a[i - 1] && a[i] < a[i + 1]) {
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0; 
}
