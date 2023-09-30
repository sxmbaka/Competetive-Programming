#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        if (a + 1 <= i and n - b <= i) ans ++;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
