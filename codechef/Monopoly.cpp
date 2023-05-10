#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{

    vector<int> arr(4);
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    int sum = 0;
    for (auto i : arr) {
        sum += i;
    }
    // cout << sum << endl;
    bool flag = 1;
    for  (auto i : arr) {
        // cout << i << " " << sum - i << endl;
        if (i > sum - i) {
            py;
            flag = 0;
        }
    }
    if (flag) pn;
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
