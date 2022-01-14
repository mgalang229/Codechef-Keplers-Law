#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int t1, t2, r1, r2;
		cin >> t1 >> t2 >> r1 >> r2;
    // simply check if it's directly proportional
		cout << (pow(t1, 2) / pow(r1, 3) == pow(t2, 2) / pow(r2, 3) ? "Yes" : "No") << '\n';
	}
	return 0;
}
