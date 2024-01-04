#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

int ans = 0;
vector<int> dp;

int backtracking(int n, int a, int b, int c) {
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MIN;
    if (dp[n] != -1)
        return dp[n];

    int max_pieces = max({backtracking(n - a, a, b, c), backtracking(n - b, a, b, c), backtracking(n - c, a, b, c)}) + 1;
    dp[n] = max_pieces;
    return max_pieces;
}

void solve() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    dp.resize(n + 1, -1);
    int ans = backtracking(n, a, b, c);
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
