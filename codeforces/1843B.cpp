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
    ll sum = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += abs(arr[i]);
    }
    int cnt = 0;
    int i = 0;
    while (i < n) {
        if (arr[i] < 0) {
            cnt++;
            while (arr[i] <= 0 and i < n) {
                i++;
            }
        }
        else i++;
    }
    cout << sum << " " << cnt << endl;
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
