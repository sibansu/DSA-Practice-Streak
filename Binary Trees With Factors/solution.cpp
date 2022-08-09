class Solution {
public:
	int N = 1e9 + 7;
	int numFactoredBinaryTrees(vector<int>& a) {
		sort(a.begin(), a.end());
		int n = a.size();
		unordered_map<int, int> m;
		for (int i = 0; i < n; ++i) m[a[i]] = 1;
		for (int i = 0; i < n; ++i) {
			long long ct = 0;
			for (int j = 0; j < i; ++j) {
				if (a[i] % a[j] == 0) (ct += m[a[j]] * 1LL * m[a[i] / a[j]])%= N;
			}
			m[a[i]] += ct;
		}
		long long ans = 0;
		for (auto &e : m) (ans += e.second) %= N;
		return ans;
	}
};