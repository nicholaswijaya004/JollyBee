#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
    {
        return (a.first < b.first);
    }
    else
    {
        return (a.second > b.second);
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), cmp);
    ll ans = 0, cnt = 0;
    ll mp[n + 2] = {0};
    for (int i = 0; i < n; i++)
    {
        if (mp[v[i].first] == v[i].first)
        {
            continue;
        }
        else
        {
            mp[v[i].first]++;
            ans += v[i].second;
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