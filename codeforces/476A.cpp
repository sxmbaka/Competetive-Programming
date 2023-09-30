#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define ll long long
#define fr(x) for(int i = 0; i < x; i++)

void solve()
{
    int n, m;
    cin >> n >> m;
    int twos = n / 2, ones = (n & 1) ? 1 : 0;
    while ((twos + ones) % m != 0) {
        twos -= 1;
        ones += 2;
    }
    if (twos >= 0) cout << twos + ones << endl;
    else cout << - 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
