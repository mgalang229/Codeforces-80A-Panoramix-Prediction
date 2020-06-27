#include <bits/stdc++.h>

using namespace std;

bool checker(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return true;
		}
	}
	return false;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	if (checker(m)) {
		cout << "NO" << '\n';
		return 0;
	}
	bool p[m+1];
	memset(p, true, sizeof(p));
	for (int i = 2; i * i <= m; i++) {
		if (p[i] == true) {
			for (int j = i * i; j <= m; j += i) {
				p[j] = false;
			}
		}
	}
	int a[1000], cnt = 0;
	for (int i = 2; i <= m; i++) {
		if (p[i]) {
			a[cnt] = i;
			cnt++;
		}
	}
	bool ok = false;
	for (int i = 0; i < cnt; i++) {
		if (n == a[i]) {
			if (a[i + 1] == m) {
				ok = true;
				break;
			}
		}
	}
	if (ok) cout << "YES";
	else cout << "NO";
	cout << '\n';
	return 0;
}
