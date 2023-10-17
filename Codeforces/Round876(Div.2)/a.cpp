#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    ll m = n / 2;
    ll ans = ceil((double)m / k);
    ll tans = ans;
    ll fans = ans * 2, mp[n + 2] = {0};
    ll cnt = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (cnt < ceil((double)i / k) && tans > 0)
        {
            mp[i] = 1;
            mp[n - i + 1] = 1;
            cnt++;
            tans--;
        }
    }
    cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mp[i] == 1)
        {
            cnt++;
        }
        if (cnt < ceil((double)i / k))
        {
            fans++;
            cnt++;
        }
    }
    cout << fans << endl;
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
