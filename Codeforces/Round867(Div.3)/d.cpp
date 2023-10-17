#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    if (n % 2 == 1)
    {
        cout << -1 << "\n";
        return;
    }
    cout << n << " ";
    for (int i = 2; i < n; i += 2)
    {
        cout << n - i + 1 << " " << i << " ";
    }
    cout << 1 << "\n";
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