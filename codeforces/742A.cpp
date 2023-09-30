#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    ll n;
    cin >> n;
    if (n == 0) cout << 1 << endl;
    else if (n % 4 == 0) cout << 6 << endl;
    else if (n % 4 == 1) cout << 8 << endl;
    else if (n % 4 == 2) cout << 4 << endl;
    else if (n % 4 == 3) cout << 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
