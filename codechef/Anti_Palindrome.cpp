#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int even = 0, odd = 0;
    unordered_map<char, int> m;
    for (auto i : s)
        m[i]++;
    for (auto i : m)
    {
        if (i.second & 1)
            odd++;
        else
            even++;
    }
    if (odd == 1)
    {
        if (even == 0)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    else if (odd >= 2)
        cout << 0 << endl;
    else if (odd == 0)
        cout << 1 << endl;
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
