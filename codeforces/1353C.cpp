#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    ll n;
    cin >> n;
    ll side = 1, d = 0;
    ll ans = 0, size = 1;
    fr(n / 2 + 1)
    {
        size = (side - 1) * 4;
        ans += size * d++;
        side += 2;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testcase = 0;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}
