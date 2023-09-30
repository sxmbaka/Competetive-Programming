#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    int n, t;
    cin >> n >> t;
    int x[n];
    for (int i = 0; i < n - 1; i++)
        cin >> x[i];
    for (int i = 0; i < n;)
    {
        if (i + 1 == t)
        {
            cout << "YES" << endl;
            return;
        }
        else if (i + 1 > t)
            break;
        else
        {
            i += x[i];
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
