// n  = 3
// 1, 2, 3
// 2, 3 -> clear
// 1, 3 -> clear
// 1, 2, 3 -> accepted
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    int n, r = 1;
    cin >> n;
    ll ans = n;
    while (r < n)
    {
        // cout << r << " " << (n - r) << endl;
        ans = ans + (r * (n - r));
        r++;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
