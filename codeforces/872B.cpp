#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<int> arr(m * n);
    for (int i = 0; i < m * n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int fmax = arr[m * n - 1], smax = arr[m * n - 2];
    int fmin = arr[0], smin = arr[1];
    if (m < n) swap(m, n);
    int ans = max((fmax - fmin) * (m - 1) * n + (fmax - smin) * (n - 1), (fmax - fmin) * (m - 1) * n + (smax - fmin) * (n - 1));
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
