#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        set<int> st;
        int n = str.size();
        int m = int(n / 2);
        for (int i = 0; i < str.size(); i++)
        {
            if (n % 2 != 0 && i == m)
                continue;
            st.insert(str[i]);
        }
        int t = st.size();
        if (t >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
