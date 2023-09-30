#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    int n, k, ans = 0;
    cin >> n >> k;
    if (n == k)
        ans = 1;
    else if (n > k)
        ans = n % k + 1;
    else
    {
        if (k % n)
            ans = k / n + 1;
        else
            ans = k / n;
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
