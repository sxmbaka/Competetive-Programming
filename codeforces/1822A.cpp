#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    vector<int> b(n);
    fr(n) cin >> a[i];
    fr(n) cin >> b[i];
    if (a[0] > t)
    {
        cout << -1 << endl;
        return;
    }
    int maxIdx = 0, max = INT_MIN;
    int i = 0;
    while (i < n - 1) {
        if (t >= a[i + 1] + 1) {
            t--;
            i++;
        } else {
            break;
        }
    }
    // cout << i << endl;
    for ( int j = 0; j <= i; j++)
    {
        if (max < b[j]) {
            max = b[j];
            maxIdx = j;
        }
    }
    cout << maxIdx + 1 << endl;
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
