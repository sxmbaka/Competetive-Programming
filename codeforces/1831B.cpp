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
    cin >> n;
    vector<int> a(n), b(n);
    unordered_map<int, int> m1, m2;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m1[a[i]] = 0;
    }
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int ans = INT_MIN;
    int i = 0;
    while (i < n) {
        int curr = a[i], cmax = 0;
        while (curr == a[i] && i < n) {
            cmax++;
            i++;
        }
        m1[curr] = max(m1[curr], cmax);
    }
    i = 0;
    while (i < n) {
        int curr = b[i], cmax = 0;
        while (curr == b[i] && i < n) {
            cmax++;
            i++;
        }
        m2[curr] = max(m2[curr], cmax);
    }
    for (auto i : m1) cout << i.first << " " << i.second << endl;
    for (auto i : m2) cout << i.first << " " << i.second << endl;
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
