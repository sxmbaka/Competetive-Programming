#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int max = 2 * n, min = 1;
    int ans[2][n];
    ans[0][0] = max--;
    ans[n - 1][n - 1] = max--;
    bool flag = true;
    int x = 1, y = 0;

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
