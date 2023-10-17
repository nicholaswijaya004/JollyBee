#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll a[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int l = -1, r = a[n - 1];
    while (r - l > 1)
    {
        int m = l + (r - l) / 2;
        int i = 0;
        while (i + 1 < n && a[i + 1] - a[0] <= 2 * m)
        {
            i++;
        }
        int j = n - 1;
        while (j - 1 >= 0 && a[n - 1] - a[j - 1] <= 2 * m)
        {
            j--;
        }
        i++, j--;
        if (i > j || a[j] - a[i] <= 2 * m)
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << r << "\n";
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