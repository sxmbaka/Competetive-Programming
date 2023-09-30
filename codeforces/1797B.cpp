#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, moves, s;
    cin >> n >> moves;
    s = n + 1;
    ll diff = 0;
    ll arr[n][n];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (ll i = 0; i < ceil(n / 2); i++)
    {
        for (ll j = 0; j < ceil(n / 2); j++)
        {
            if (arr[i][j] != arr[s - i][s - j])
                diff++;
        }
    }
    if (diff <= moves)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
