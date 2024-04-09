#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> arr(n * n);
    for (int i = 0; i < n * n; i++)
        cin >> arr[i];
    unordered_map<int, int> mp;
    for (auto i : arr)
        mp[i]++;
    int mini = *min_element(arr.begin(), arr.end());
    int current = mini, next = mini;
    for (int i = 0; i < n; i++)
    {
        current = next;
        next = current + d;
        for (int j = 0; j < n; j++)
        {
            if (mp.find(current) == mp.end() or mp[current] == 0)
            {
                pn;
                return;
            }
            else {
                mp[current]--;
            }
            current += c;
        }
    }
    py;
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