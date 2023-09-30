#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    ll x, y;
    ll a, b;
    cin >> x >> y >> a >> b;
    if (b > 2 * a)
        b = 2 * a;
    ll ans = 0;
    if (x < y)
        ans = ans + (b * x) + (a * (y - x));
    else
        ans = ans + (b * y) + (a * (x - y));
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
