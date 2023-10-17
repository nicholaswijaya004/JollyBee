#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    bool flag = true;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] == '1' && b[i] == '1')
        {
            if (a[i - 1] == '0' && b[i - 1] == '0')
            {
                flag = true;
                break;
            }
            else
            {
                flag = false;
            }
        }
    }
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] == '0' && b[i] == '0')
        {
            if (a[i + 1] == '1' && b[i + 1] == '1')
            {
                flag = true;
                break;
            }
            else
            {
                flag = false;
            }
        }
    }
    if (flag == true)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
}

// 010001
// 00

int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}