#include <bits/stdc++.h>
using namespace std;
#define MOD 1073741824
#define ll long long
#define f first
#define s second
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr(i, x, y) for (int i = x; i < y; i++)

int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                cnt++;

            else
                cnt = cnt + 2;
        }
    }
    return cnt;
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum = 0;
    unordered_map<int, int> divisors;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                int x = (i + 1) * (j + 1) * (k + 1);
                if (divisors.find(x) == divisors.end())
                {
                    divisors[x] = countDivisors(x);
                }
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                int x = (i + 1) * (j + 1) * (k + 1);
                sum += divisors[x];
            }
        }
    }
    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
