#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    ll a[n + 2];
    ll min = 1e18;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= min)
        {
            min = a[i];
        }
    }
    ll h[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    ll le = 0, ri = 0, ans = 0, j = 0, mle = 1, sum = a[0];
    if (min <= k)
    {
        ans = 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (h[i - 1] % h[i] == 0)
        {
            sum += a[i];
            mle++;
        }
        else
        {
            j = i;
            sum = a[i];
            mle = 1;
        }
        while (sum > k)
        {
            sum -= a[j];
            j++;
            mle--;
        }
        ans = max(ans, mle);
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