#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

vector<int> remove(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 2; i++) {
        if (arr[i] == arr[i + 2]) {
            arr[i] = -arr[i];
        }
    }
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return arr;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (n <= 2) {
        cout << -1 << endl;
        return;
    }
    remove(arr);
    
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