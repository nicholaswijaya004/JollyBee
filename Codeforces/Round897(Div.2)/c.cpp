#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll s, max;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == max)
        {
            max++;
        }
    }
    ll res = max;
    while (res != -1)
    {
        cout << res << "\n";
        cin >> res;
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