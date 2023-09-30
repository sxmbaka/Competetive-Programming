#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    int n, k;
    cin >> n >> k;
    char arr[n][k];
    unordered_map<int, bool> present;
    for (int i = 0; i < n; i++)
    {
        present[i] = true;
        for (int j = 0; j < k; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int j = 0; j < k; j++)
    {
        for (int i = 1; i < n; i++)
        {
            if (present[i])
                if (arr[i][j] != arr[0][j])
                    present[i] = false;
        }
    }
    int a = 0;
    for (auto i : present)
        if (i.second)
            a++;
    cout << a << endl;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll testcase = 0;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}
