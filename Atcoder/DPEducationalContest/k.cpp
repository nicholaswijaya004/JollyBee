#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    ll a[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dp[k + 2];
    for (int i = 0; i <= k; i++)
    {
        dp[i] = 0;
    }
    for (int i = 1; i <= k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= a[j] && dp[i - a[j]] == 0)
            {
                dp[i] = 1;
            }
        }
    }
    if (dp[k] == 1)
    {
        cout << "First"
             << "\n";
    }
    else
    {
        cout << "Second"
             << "\n";
    }
}

int main()
{
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
}