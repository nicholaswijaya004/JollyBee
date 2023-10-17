#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxn = 2e5;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            i += k - 1;
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
