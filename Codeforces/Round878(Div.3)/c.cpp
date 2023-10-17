#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    ll a[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll tmp = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= q)
        {
            tmp++;
        }
        else
        {
            if (tmp >= k)
            {
                tmp -= (k - 1);
                ans += ((tmp * tmp) + (tmp)) / 2;
            }
            tmp = 0;
        }
    }
    if (tmp >= k)
    {
        tmp -= (k - 1);
        ans += ((tmp * tmp) + (tmp)) / 2;
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