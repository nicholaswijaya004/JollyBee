#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int cnta = 0, cntb = 0;
    for (int i = 0; i < s.size();)
    {
        if (s[i] == 'B')
        {
            cntb++;
            i++;
        }
        else
        {
            while (s[i] == 'A')
            {
                i++;
            }
            cnta++;
        }
    }
    // cout << cntb << " " << cnta << endl;
    ll cnt = 0;
    if (cnta == cntb)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
        return;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
            {
                cnt++;
            }
        }
        ll mn = 1e18;
        for (int i = 0; i < s.size(); i++)
        {
            ll tmp = 0;
            while (s[i] == 'A')
            {
                tmp++;
                i++;
            }
            mn = min(mn, tmp);
        }
        cout << cnt - mn << "\n";
    }
}

int main()
{
    // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}