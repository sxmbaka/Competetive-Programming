#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    int n, k, l;
    cin >> n >> k >> l;
    int ans = 0;
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (b == l)
        {
            arr.push_back({a, b});
        }
    }
    sort(arr.begin(), arr.end(), greater<pair<int, int>>());
    for (int i = 0; i < arr.size(); i++)
    {
        if (!k) break;
        if (arr[i].second == l)
        {
            ans += arr[i].first;
            k--;
        }
    }
    if (ans == 0 or k != 0)
        cout << "-1" << endl;
    else
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
