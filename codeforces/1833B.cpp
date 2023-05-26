#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solveTestCase(int n, int k, const vector<int>& a, vector<int> b) {
    sort(b.begin(), b.end());

    vector<int> result;
    for (int num : a) {
        int left = 0;
        int right = n - 1;
        int closest = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (b[mid] >= num - k && b[mid] <= num + k) {
                closest = mid;
                right = mid - 1;
            } else if (b[mid] > num + k) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        result.push_back(b[closest]);
        b.erase(b.begin() + closest);
    }

    return result;
}


int main() {
    int t;
    cin >> t;

    setvbuf(stdout, NULL, _IONBF, 0); // Disable output buffering

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> result = solveTestCase(n, k, a, b);

        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
        cout.flush(); // Manually flush the output
    }

    return 0;
}
