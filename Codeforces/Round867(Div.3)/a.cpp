#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;
    int a[n + 1], b[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] += i;
    }
    ll max = 0, midx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= t)
        {
            if (b[i] > max)
            {
                max = b[i];
                midx = (i + 1);
            }
        }
        // cout << a[i] << endl;
    }
    cout << midx << "\n";
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
