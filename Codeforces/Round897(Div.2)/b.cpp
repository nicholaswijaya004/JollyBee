#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i <= n; i++)
    {
        ans += '0';
    }
    int cnt = 0;
    if (n % 2 == 0)
    {
        for (int i = 0; i < (n / 2); i++)
        {
            if (s[i] != s[(n - 1) - i])
            {
                cnt++;
            }
        }
        for (int i = cnt; i <= n - cnt; i += 2)
        {
            ans[i] = '1';
        }
    }
    else
    {
        for (int i = 0; i < (n / 2); i++)
        {
            if (s[i] != s[(n - 1) - i])
            {
                cnt++;
            }
        }
        for (int i = cnt; i <= n - cnt; i++)
        {
            ans[i] = '1';
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
}