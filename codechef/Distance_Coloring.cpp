#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

ll fact(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = (result * i) % MOD;
    }
    return result;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    ll ans = 1;
    if (n >= k)
        ans = fact(k) % MOD;
    else
        ans = (fact(k) / (fact(k - n))) % MOD;
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
