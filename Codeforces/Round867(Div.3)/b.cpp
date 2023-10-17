#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxn = 1e10, minn = -1e18;

void solve()
{
    int n;
    cin >> n;
    ll arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll min1 = maxn, min1idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min1)
        {
            min1 = arr[i];
            min1idx = i;
        }
    }
    ll min2 = maxn;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min2 && i != min1idx)
        {
            min2 = arr[i];
        }
    }
    ll max1 = minn, max1idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= max1)
        {
            max1 = arr[i];
            max1idx = i;
        }
    }
    ll max2 = minn;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= max2 && i != max1idx)
        {
            max2 = arr[i];
        }
    }
    // cout << min1 << " " << min2 << endl;
    ll res1 = minn;
    if (min1 < 0 && min2 < 0)
    {
        res1 = min1 * min2;
    }
    ll res2 = max1 * max2;
    cout << max(res1, res2) << "\n";
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