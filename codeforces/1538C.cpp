#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    ll n, l, r, ans = 0;
    cin >> n >> l >> r;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    fr(n) {
        int a = (upper_bound(arr.begin() + i + 1, arr.end(), r - arr[i]) - arr.begin());
        int b = (lower_bound(arr.begin() + i + 1, arr.end(), l - arr[i]) - arr.begin());
        if (a != n or b != n)
            ans += (a - b);
        // cout << a << " " << b << endl;
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
