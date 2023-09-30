#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n;
vl fsz;
ll cl;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n;
	fsz = vl(n);
	for (auto&& x : fsz) {
		cin >> x;
	}
	cin >> cl;

	auto ans = ll{ 0 };
	for (const auto& x : fsz) {
		ans += cl * (x / cl + (0 != x % cl ? 1 : 0));
	}

	cout << ans;

	return 0;
}