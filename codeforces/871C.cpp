#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    int n;
    cin >> n;
    int m1 = INT_MAX, m2 = INT_MAX, m3 = INT_MAX;
    bool m1f = 0, m2f = 0, m3f = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        int b;
        cin >> a >> b;
        if (b == 1)
        {
            m1 = min(a, m1);
            m1f = 1;
        }
        else if (b == 10)
        {
            m2 = min(a, m2);
            m2f = 1;
        }
        else if (b == 11)
        {
            m3 = min(a, m3);
            m3f = 1;
        }
    }
    if ((!m1f or !m2f) and !m3f) {
        cout << -1 << endl;
        return;
    }
    int v1 = INT_MAX;
    if (m1f and m2f)
    {
        v1 = m1 + m2;
    }
    cout << min(m3, v1) << endl;
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
