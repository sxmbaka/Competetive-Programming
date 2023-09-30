#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define ll long long
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    int a, b, time = 0;
    cin >> a >> b;
    while (a > 0)
    {
        time += min(a, b);
        a -= b;
        a += 1;
    }
    cout << time << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
