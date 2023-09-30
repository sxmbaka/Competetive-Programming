#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(x) for (int i = 0; i < x; i++)

int longest_blank_space(vector<int>& a) {
    int n = a.size();
    int max_len = 0;
    int curr_len = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            curr_len++;
        }
        else {
            curr_len = 0;
        }
        if (curr_len > max_len) {
            max_len = curr_len;
        }
    }
    return max_len;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    fr(n) {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    cout << longest_blank_space(arr) << endl;
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
