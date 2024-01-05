#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    sort(begin(arr), end(arr));
    int x = abs(arr[0] - arr[n - 1]);
    for (ll i = 1; i < n - 1; i++)
        x = __gcd(x, abs(arr[i] - arr[n - 1]));
    ll extra = arr[n - 1];
    while (true) {
        ll chance = extra - x;
        if (s.find(chance) == s.end() or chance < arr.front()) {
            extra = chance;
            break;
        }
        extra -= x;
    }
    // cout << x << " " << extra << endl;
    arr.push_back(extra);
    ll ans = 0;
    for (ll i = 0; i < n + 1; i++) {
        ans += abs(arr[i] - arr[n - 1]) / x;
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
