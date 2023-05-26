#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, b = 0;
    char ser = 'A';
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A') {
            if (ser == 'A') {
                a++;
            }
            else {
                ser = 'A';
            }
        } else {
            if (ser == 'B') {
                b++;
            }
            else {
                ser = 'B';
            }
        }
    }
    cout << a << " " << b << endl;
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
