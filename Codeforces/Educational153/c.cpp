#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll p[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    ll mn = n + 1, mnw = n + 1, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (mn < p[i] && p[i] < mnw)
        {
            ans++;
            mnw = p[i];
        }
        mn = min(mn, p[i]);
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