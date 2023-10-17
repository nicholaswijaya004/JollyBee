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
    ll a1[n + 2];
    for (int i = 0; i < n; i++)
    {
        a1[i] = a[i];
    }
    sort(a1, a1 + n);
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] % 2 == 0 && a1[i] % 2 == 1) || (a[i] % 2 == 1 && a1[i] % 2 == 0))
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
    {
        cout << "NO"
             << "\n";
    }
    else
    {
        cout << "YES"
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