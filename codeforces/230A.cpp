#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, s;
    cin >> s >> n;
    pair<int, int> arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr + n);
    for (auto i : arr)
    {
        if (s <= i.first)
        {
            cout << "NO" << endl;
            return;
        }
        s += i.second;
    }
    cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
