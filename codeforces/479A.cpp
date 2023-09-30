#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int w = a + b + c;
    int x = a * (b + c);
    int y = (a + b) * c;
    int z = a * b * c;
    cout << max(max(w, x), max(y, z)) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
