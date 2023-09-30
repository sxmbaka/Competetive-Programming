#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define ll long long
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    unordered_map<string, string> dict;
    int n, m;
    cin >> n >> m;
    fr(m)
    {
        string a, b;
        cin >> a >> b;
        dict[a] = b;
    }
    fr(n)
    {
        string t;
        cin >> t;
        if (dict[t].size() < t.size()) cout << dict[t] << " ";
        else cout << t << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
