#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    sort(begin(arr), end(arr));
    ll x = abs(arr[0] - arr[n - 1]);
    for (ll i = 1; i < n - 1; i++)
        x = gcd(x, abs(arr[i] - arr[n - 1]));
    ll extra = arr[n - 1] - x;
    for (ll i = n - 2; i >= 0; i--) {
        if (arr[i] == extra) {
            extra -= x;
        }
        else break;
    }
    arr.push_back(extra);
    ll ans = 0;
    for (ll i = 0; i < n + 1; i++) {
        ans += (arr[n - 1] - arr[i]) / x;
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
