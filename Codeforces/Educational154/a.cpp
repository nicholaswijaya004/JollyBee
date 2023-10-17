#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int o, t;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            o = i;
        }
        if (s[i] == '3')
        {
            t = i;
        }
    }
    if (t < o)
    {
        cout << "31"
             << "\n";
    }
    else
    {
        cout << "13"
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
