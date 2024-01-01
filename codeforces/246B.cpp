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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int i = 0, j = n - 1;
    sort(arr.begin(), arr.end());
    while (i < j) {
        if (arr[i] == arr[j]) {
            i++;
            j--;
        }
        else if (arr[i] + 1 == arr[j]) {
            i++;
        }
        else {
            arr[i]++;
            arr[j]--;
        }
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    int ans = 0;
    for (auto i : mp)
        ans = max(ans, i.second);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
