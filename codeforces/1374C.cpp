#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(x) for (int i = 0; i < x; i++)

void solve()
{
    int n;
    cin >> n;
    stack<char> s;
    string st;
    cin >> st;
    fr(n)
    {
        if (!s.empty() and st[i] == ')' and s.top() == '(')
        {
            s.pop();
        }
        else
        {
            s.push(st[i]);
        }
    }
    cout << s.size() / 2 << endl;
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
