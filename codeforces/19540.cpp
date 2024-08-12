#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testcase = 0;
    cin >> testcase;
    while (testcase--)
    {
        ll n, m, k;
        cin >> n >> m >> k;

        ll max = ceil((float)n / m);
        // cout << max << endl;
        if (n - max <= k)
            pn;
        else
            py;
    }
    return 0;
}