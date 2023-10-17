#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s.size() == 2 && s[0] == '(' && s[1] == ')')
    {
        cout << "NO"
             << "\n";
        return;
    }
    cout << "YES"
         << "\n";
    bool flag = true;
    for (int i = 1; i < s.size(); i++)
    {
        if (i % 2 == 1 && s[i] == ')' && s[i - 1] != '(')
        {
            flag = false;
            break;
        }
        if (i % 2 == 1 && s[i] == '(' && s[i - 1] != ')')
        {
            flag = false;
            break;
        }
        if (i % 2 == 0 && s[i] == ')' && s[i - 1] != '(')
        {
            flag = false;
            break;
        }
        if (i % 2 == 0 && s[i] == '(' && s[i - 1] != ')')
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
    {
        for (int i = 0; i < 2 * s.size(); i++)
        {
            if (i % 2 == 0)
            {
                cout << "(";
            }
            else
            {
                cout << ")";
            }
        }
        cout << "\n";
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            cout << "(";
        }
        for (int i = 0; i < s.size(); i++)
        {
            cout << ")";
        }
        cout << "\n";
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
