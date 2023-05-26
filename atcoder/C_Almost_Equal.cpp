#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

bool differByOneChar(string a, string b, int m)
{
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        if (a[i] != b[i])
            count++;
    }
    return count == 1;
}

void solve()
{
    int n, m, count = 0;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (differByOneChar(arr[i], arr[j], m))
            {
                count++;
            }
        }
    }
    if (count == n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
