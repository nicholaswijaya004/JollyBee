#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll seq[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> seq[i];
    }
    if (seq[n - 1] == 1)
    {
        cout << "NO"
             << "\n";
        return;
    }
    vector<pair<ll, ll>> v;
    for (int i = n - 1; i >= 0; i--)
    {
        ll cnt = 0;
        if (seq[i] == 1)
        {
            cnt++;
            while (i != 0 && seq[i - 1] == 1)
            {
                i--;
                cnt++;
            }
            v.push_back({cnt, n - (i + 1)});
        }
    }
    // for (int i=0; i<v.size(); i++) {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }
    ll res[n + 1] = {0};
    for (int i = 0; i < v.size(); i++)
    {
        res[v[i].second] = v[i].first;
    }
    cout << "YES"
         << "\n";
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            cout << res[i] << " ";
        }
        else
        {
            cout << res[i] << "\n";
        }
    }
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