#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

bool isprime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1) {
        py;
        cout << n << endl;
        fr(n) cout << 1 << " ";
        cout << endl;
    } else {
        if (n % 2 == 0 and k >= 2) {
            py;
            cout << n / 2 << endl;
            fr (n / 2) cout << 2 << " ";
            cout << endl;
        }
        else if (k >= 3) {
            py;
            cout << n / 2 << endl;
            fr(n / 2 - 1) cout << 2 << " ";
            cout << 3 << endl;
        }
        else pn;
    }
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
