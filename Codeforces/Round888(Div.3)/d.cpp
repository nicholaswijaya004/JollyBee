#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n;

bool isPermutation(vector<ll> a)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] <= 0 || a[i] > n)
        {
            return false;
        }
    }
    set<ll> s(a.begin(), a.end());
    return s.size() == n;
}

vector<ll> prefSumToArray(vector<ll> p)
{
    vector<ll> res(n);
    res[0] = p[0];
    for (int i = 1; i < n; ++i)
    {
        res[i] = p[i] - p[i - 1];
    }
    return res;
}

void solve()
{
    cin >> n;
    vector<ll> a(n - 1);
    for (int i = 0; i + 1 < n; ++i)
    {
        cin >> a[i];
    }
    ll x = n * (n + 1) / 2;
    if (a.back() != x)
    {
        a.push_back(x);
        vector<ll> b = prefSumToArray(a);
        if (isPermutation(b))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        return;
    }
    map<ll, int> cnt;
    cnt[a[0]]++;
    for (int i = 1; i < n - 1; ++i)
    {
        cnt[a[i] - a[i - 1]]++;
    }
    vector<int> cntGt1;
    for (auto p : cnt)
    {
        if (p.second > 1)
        {
            cntGt1.push_back(p.first);
        }
    }
    if (cntGt1.size() > 1)
    {
        cout << "NO\n";
        return;
    }
    if (cntGt1.size() == 1)
    {
        int x1 = cntGt1[0];
        if (cnt[x1] > 2)
        {
            cout << "NO\n";
            return;
        }
    }
    vector<int> cnt0;
    for (int i = 1; i <= n; ++i)
    {
        if (cnt[i] == 0)
        {
            cnt0.push_back(i);
        }
    }
    if (cnt0.size() != 2)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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