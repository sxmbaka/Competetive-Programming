#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    ll totsum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        totsum += arr[i];
    }
    sort(arr.begin(), arr.end());
    int i = 0, j = n - 1, d = k;
    ll s1 = totsum, s2 = totsum, s3 = totsum;
    while (d--)
    {
        if (arr[i] + arr[i + 1] < arr[j])
        {
            s1 -= (arr[i] + arr[i + 1]);
            i += 2;
        }
        else
        {
            s1 -= (arr[j]);
            j--;
        }
    }
    for (int i = 0; i <= (n - k); i++)
        s2 -= arr[i];
    for (int i = n - 1; i >= (n - k); i--)
        s3 -= arr[i];
    // cout << s1 << " " << s2 << " " << s3 << endl;
    cout << max(s1, max(s2, s3)) << endl;
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
