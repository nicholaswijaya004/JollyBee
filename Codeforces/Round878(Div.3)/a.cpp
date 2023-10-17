#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char tmp = s[0];
    cout << s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] != tmp)
            continue;
        if (i != n - 1)
        {
            tmp = s[i + 1];
            cout << s[i + 1];
            i++;
        }
    }
    cout << "\n";
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
