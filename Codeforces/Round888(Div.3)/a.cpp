#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, m, k, h;
    cin >> n >> m >> k >> h;
    ll hi[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> hi[i];
    }
    int max = (m - 1) * k, min = k;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(h - hi[i]) <= max && abs(h - hi[i]) >= min && abs(h - hi[i]) % k == 0)
        {
            ans++;
        }
    }
    cout << ans << "\n";
}

int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
