#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define ll long long
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    int n, t;
    cin >> n >> t;
    string ans;
    if (n == 1)
    {
        if (t == 10)
        {
            cout << -1 << endl;
            return;
        }
        cout << t << endl;
        return;
    }
    fr(n - 1) ans += "0";
    if (t == 10)
    {
        ans = "1" + ans;
    }
    else
    {
        ans = to_string(t) + ans;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
