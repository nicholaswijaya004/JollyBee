#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn = 3e5;

void solve()
{
    int n, k;
    cin >> n >> k;
    ll c[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    ll cn = c[n - 1];
    ll ans = 0, c0 = c[0];
    int fidx = 0;
    if (cn != c0)
    {
        ans = k;
        for (int i = 0; i < n; i++)
        {
            if (c[i] == c0)
            {
                ans--;
                if (ans == 0)
                {
                    fidx = i;
                    break;
                }
            }
        }
    }
    ll ans1 = 0;
    if (cn != c0)
    {
        for (int i = fidx + 1; i < n; i++)
        {
            if (c[i] == cn)
            {
                ans1++;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (c[i] == cn)
            {
                ans1++;
            }
        }
    }
    if (ans1 < k || ans != 0)
    {
        cout << "NO"
             << "\n";
    }
    else
    {
        cout << "YES"
             << "\n";
    }
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