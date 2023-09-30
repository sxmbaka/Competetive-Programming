#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int a1 = -1, a2 = -1;
    if (x1 == 1)
    {
        if (y1 == 1)
        {
            a1 = 2;
        }
        else
        {
            a1 = 3;
        }
    }
    else if (y1 == 1)
    {
        if (x1 == 1)
        {
            a1 = 2;
        }
        else
        {
            a1 = 3;
        }
    }
    else if (x1 == n)
    {
        if (y1 == m)
        {
            a1 = 2;
        }
        else
        {
            a1 = 3;
        }
    }
    else if (y1 == n)
    {
        if (x1 == n)
        {
            a1 = 2;
        }
        else
        {
            a1 = 3;
        }
    }
    else
    {
        a1 = 4;
    }
    if (x2 == 1)
    {
        if (y2 == 1)
        {
            a2 = 2;
        }
        else
        {
            a2 = 3;
        }
    }
    else if (y2 == 1)
    {
        if (x2 == 1)
        {
            a2 = 2;
        }
        else
        {
            a2 = 3;
        }
    }
    else if (x2 == n)
    {
        if (y2 == m)
        {
            a2 = 2;
        }
        else
        {
            a2 = 3;
        }
    }
    else if (y2 == n)
    {
        if (x2 == n)
        {
            a2 = 2;
        }
        else
        {
            a2 = 3;
        }
    }
    else
    {
        a2 = 4;
    }
    if (a1 < a2)
        cout << a1 << endl;
    else
        cout << a2 << endl;
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
