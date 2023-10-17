#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll cnt[27];
    memset(cnt, 0, sizeof cnt);
    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i] - 'a']++;
    }
    ll maxn = 0;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > maxn)
        {
            maxn = cnt[i];
        }
    }
    if (n % 2 == 1 || maxn > (s.size() / 2))
    {
        cout << -1 << "\n";
        return;
    }
    memset(cnt, 0, sizeof cnt);
    ll sum = 0;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] == s[s.size() - i - 1])
        {
            cnt[s[i] - 'a']++;
            sum++;
        }
    }
    // for (int i=0; i<26; i++) {
    //     cout << cnt[i] << " ";
    // }
    ll ans = 0;
    for (int i = 0; i < 26; i++)
    {
        ans = max(ans, cnt[i]);
    }
    cout << max(ans, ((sum + 1) / 2)) << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}