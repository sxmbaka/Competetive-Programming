#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fr (x) for (int i = 0; i < x; i++)

int shortest_distance_between_points(const std::pair<int, int>& A, const std::pair<int, int>& B, const std::pair<int, int>& P) {
    int dx = std::abs(B.first - A.first);
    int dy = std::abs(B.second - A.second);

    int dx1 = std::abs(P.first - A.first);
    int dy1 = std::abs(P.second - A.second);

    if (dx > dy) {
        return dx1 + std::abs(dy - dy1);
    } else if (dy > dx) {
        return dy1 + std::abs(dx - dx1);
    } else {
        return dx1;
    }
}

void solve()
{
    pair<int, int> a, b, c;
    cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second;
    // pair<int, int> d1, d2;
    // d1.first = a.first;
    // d1.second = b.second;
    // d2.first = b.first;
    // d2.second = a.second;
    // if (a.first < d1)
    cout << shortest_distance_between_points(b, c, a) << endl;
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
