#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    ll n = 0, k = 0;
    cin >> n >> k;
    ll a[n];
    fr(n)
    {
        cin >> a[i];
        
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > k)
        {
            ans += a[i] - k;
            a[i + 1] += a[i] - k;
        }
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
