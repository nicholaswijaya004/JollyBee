#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxn = 2e5;

void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    if (s[0] != 'a')
    {
        ans++;
    }
    if (s[1] != 'b')
    {
        ans++;
    }
    if (s[2] != 'c')
    {
        ans++;
    }
    if (ans == 2 || ans == 0)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
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