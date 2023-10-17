#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    ll a[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 1, r = 1e12;
    while (l < r)
    {
        ll mid = l + (r - l) / 2;
        ll tmp = 0;
        for (int i = 0; i < n; i++)
        {
            if (mid - a[i] <= 0)
            {
                continue;
            }
            tmp += mid - a[i];
        }
        if (tmp > x)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l - 1 << "\n";
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