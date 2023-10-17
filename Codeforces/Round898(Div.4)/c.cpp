#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxn = 2e5;

void solve()
{
    char grid[11][11];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> grid[i][j];
        }
    }
    ll pts[11][11];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i >= 5 && j < 5)
            {
                pts[i][j] = min(abs(i - 9), j);
            }
            else if (j >= 5 && i < 5)
            {
                pts[i][j] = min(i, abs(j - 9));
            }
            else if (i >= 5 && j >= 5)
            {
                pts[i][j] = min(abs(i - 9), abs(j - 9));
            }
            else
            {
                pts[i][j] = min(i, j);
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (grid[i][j] == 'X')
            {
                ans += pts[i][j] + 1;
            }
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