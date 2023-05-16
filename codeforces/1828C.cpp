#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

int binJustGreaterThan(vector<int> &arr, int n)
{
    // Ascending Order Only
    int l = 0, m, r = arr.size() - 1;
    while (l < r)
    {
        m = l + (r - l) / 2;
        if (arr[m] <= n)
            l = m + 1;
        else
            r = m;
    }
    return l;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(b.begin(), b.end());
    sort(a.begin(), a.end());
    ll ans = 1;
    if (a[0] <= b[0])
    {
        cout << 0 << endl;
        return;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (ans > MOD)
            ans %= MOD;
        int x = i + 1 - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
        ans *= x;
        // cout << i << " " << b[i] << " " << x << endl;
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
