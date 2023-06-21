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
    vector<int> arr(n), v;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int front = arr[0], back = arr[0];
    v.push_back(1);
    for (int i = 1; i < n; i++) {
        if (arr[i] <= front) {
            v.push_back(1);
            front = arr[i];
        } else if (arr[i] >= back) {
            v.push_back(1);
            back = arr[i];
        }
        else {
            v.push_back(0);
        }
    }
    for (auto i : v) cout << i << " ";
    cout << endl;
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
