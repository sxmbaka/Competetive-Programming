#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    int n, k;
    cin >> n >> k;
    int d = 0, i;
    for (i = n; i >= 1; i--)
    {
        if (i % k != 0)
        {
            d = i;
            break;
        }
    }
    int cnt = 0, pos = 0;
    while (pos < n)
    {
        pos += d;
        cnt++;
    }
    if (pos > n) {
        cout << cnt << endl;
        fr(cnt - 1) cout << d << " ";
        cout << n - (pos - d) << endl;
    } else {
        cout << cnt << endl;
        fr(cnt) cout << d << " ";
        cout << endl;
    }
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
