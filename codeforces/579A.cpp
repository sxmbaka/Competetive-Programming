#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int x, ans = 0;
    cin >> x;
    while (x > 0) {
        int exp = floor(log2(x));
        int val = pow(2, exp);
        x = x - val;
        ans++;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
