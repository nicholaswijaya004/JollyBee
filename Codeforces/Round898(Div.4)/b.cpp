#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxn = 2e5;

void solve()
{
    int n;
    cin >> n;
    ll a[n + 2];
    ll minidx = 0, min = 20;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < min)
        {
            min = a[i];
            minidx = i;
        }
    }
    a[minidx] += 1;
    ll ans = a[0];
    for (int i = 1; i < n; i++)
    {
        ans *= a[i];
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