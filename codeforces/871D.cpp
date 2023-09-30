#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    int m, n;
    cin >> n >> m;
    while (m < n)
    {
        if (m & 1)
            m = (m + m * 2);
        else
            m = (m + m / 2);
        // cout << m << endl;
    }
    if (m == n) py;
    else pn;
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
