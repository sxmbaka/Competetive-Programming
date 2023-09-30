// https://codeforces.com/problemset/problem/131/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;
    bool c = 1;
    for (int i = 1; i < s.length(); i++)
        if (islower(s[i]))
            c = 0;
    if (c)
    {
        if (islower(s[0]))
            cout << (char)toupper(s[0]);
        else
            cout << (char)tolower(s[0]);
        for (int i = 1; i < s.length(); i++)
            cout << (char)tolower(s[i]);
    }
    else
    {
        cout << s << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
