#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

void solve()
{
    ull n;
    cin >> n;
    ull res = (n * n) + (2 * n) + 2;
    cout << res << "\n";
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