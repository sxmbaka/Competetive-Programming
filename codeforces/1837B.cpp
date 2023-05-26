#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    int n;
    cin >> n;
    vector<char> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    stack<char> s;
    int ma = INT_MIN, curr = 0;
    for (auto i : arr)
    {
        if (!s.empty() and s.top() == '<' and i == '>')
        {
            s.pop();
        }
        else if (!s.empty() and (s.top() == '>' and i == '<')) {
            s.pop();
        }
        else
        {
            s.push(i);
        }
        ma = max(ma, (int)s.size());
    }
    cout << ma + 1 << endl;
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
