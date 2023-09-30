#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m, a;
    cin >> n >> m >> a;
    ll c_l = (n % a == 0) ? n : ((n / a) + 1) * a;
    ll c_b = (m % a == 0) ? m : ((m / a) + 1) * a;
    cout << (c_l * c_b) / (a * a) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
