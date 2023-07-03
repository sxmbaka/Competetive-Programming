#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

ll manhattan(pair<int, int> a, pair<int, int> b)
{
    return abs(a.f - b.f) + abs(a.s - b.s);
}

void solve()
{
    pair<int, int> a, b, c;
    cin >> a.f >> a.s >> b.f >> b.s >> c.f >> c.s;
    cout << ((manhattan(a, b) + manhattan(a, c) - manhattan(b, c)) / 2) + 1 << endl;
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
