#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    string a;
    cin >> a;
    int cnt = 0;
    bool ok = 1;
    int good = 1;
    int bad = 1e9;
    for (auto i : a)
    {
        if (i == '+')
        {
            cnt++;
        }
        else if (i == '-')
        {
            cnt--;
            if (cnt < bad)
                bad = 1e9;
            good = min(good, cnt);
            good = max(1, good);
        }
        else if (i == '1')
        {
            if (bad <= cnt)
                ok = 0;
            good = max(good, cnt);
        }
        else
        {
            if (good >= cnt)
                ok = 0;
            bad = min(bad, cnt);
        }
    }
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}