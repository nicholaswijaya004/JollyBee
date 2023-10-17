#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (k > 30)
        k = 30;
    cout << min(n + 1, (1 << k)) << "\n";
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