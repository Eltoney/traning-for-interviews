#include <bits/stdc++.h>

using namespace std;

#define el				'\n'
#define sz(v)			((int)((v).size()))
#define clr(v, d)		memset(v, d, sizeof(v))
#define fastIO ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define doublePrecision(a) cout << fixed << setprecision(a)

double const EPS = 1e-8, PI = acos(-1);
const int N = 2000 + 9, M = 25 + 7, OO = (int) 1e8;
const long long MOD = 1e9 + 7, INF = 1e18 + 9;

typedef long long ll;
typedef long double lld;

void INPUT() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
//	freopen("alimagde.in", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int n, x, mxP = -1e9, mxPID;
	cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> x;
		int P = x, N = -1 * x - 1;
		if (P < N)
			swap(P, N);
		if (n % 2 == 0) {
			cout << N << " ";
		} else {
			v[i] = { N, P };
			if (P > mxP) {
				mxP = P;
				mxPID = i;
			}
		}
	}
	if (n % 2) {
		for (int i = 0; i < n; i++) {
			cout << (i == mxPID ? v[i].second : v[i].first) << " ";
		}
	}
}

int main() {
	doublePrecision(0);
	fastIO;
	INPUT();
//	freopen("help.in", "r", stdin);

	int t;
	t = 1;
//	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
