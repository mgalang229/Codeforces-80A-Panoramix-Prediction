#include <bits/stdc++.h>

using namespace std;

bool checker(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int n1 = n + 1;
	while (!checker(n1)) {
		n1 += 1;
	}
	if (n1 == m) cout << "YES";
	else cout << "NO";
	cout << '\n';
	return 0;
}
