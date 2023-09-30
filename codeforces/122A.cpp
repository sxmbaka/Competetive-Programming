#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isLucky(int n)
{
    while (n > 0)
    {
        if (n % 10 != 4 && n % 10 != 7)
            return false;
        n /= 10;
    }
    return true;
}

void solve()
{
    int n, t = 1;
    cin >> n;
    // cout << isLucky(n) << endl;
    for (int i = 1; i <= n; i++)
    {
        if (isLucky(i) && n % i == 0)
        {
            cout << "YES" << endl;
            t = 0;
            break;
        }
    }
    if (t)
        cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
