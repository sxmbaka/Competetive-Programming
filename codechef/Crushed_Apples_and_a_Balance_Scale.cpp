#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

bool isSubsetSum(const std::vector<int>& numbers, int target_sum) {
    int n = numbers.size();

    // Create a table to store the intermediate results
    std::vector<std::vector<bool>> dp(n + 1, std::vector<bool>(target_sum + 1, false));

    // Base case: if the target sum is 0, it can be achieved with an empty subset
    for (int i = 0; i <= n; ++i) {
        dp[i][0] = true;
    }

    // Fill the table using dynamic programming
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= target_sum; ++j) {
            if (j < numbers[i - 1]) {
                // Exclude the number if it is greater than the current sum
                dp[i][j] = dp[i - 1][j];
            } else {
                // Include the number or exclude it based on previous results
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - numbers[i - 1]];
            }
        }
    }

    return dp[n][target_sum];
}

void solve()
{
    ll m, n;
    cin >> m >> n;
    if (m < n)
    {
        pn;
        return;
    }
    if (m == n)
    {
        py;
        return;
    }
    vector<int> arr;
    while (m % 2 == 0) {
        arr.push_back(m);
        m /= 2;
    }
    if (isSubsetSum(arr, n)) py;
    else pn;
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
