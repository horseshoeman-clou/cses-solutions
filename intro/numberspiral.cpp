#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long k = max(x, y);
        long long k2 = k * k;
        long long ans;

        if (k % 2 == 1) {
            // odd
            if (x == k)
                ans = k2 - (y - 1);
            else
                ans = k2 - (k - x);
        } else {
            // even
            if (y == k)
                ans = k2 - (x - 1);
            else
                ans = k2 - (k - y);
        }

        cout << ans << "\n";
    }
}

