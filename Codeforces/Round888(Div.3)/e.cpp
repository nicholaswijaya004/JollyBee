#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn = 3e5;
bool vis[maxn];
vector<ll> adj[maxn];
ll c[maxn];

ll dfs(int v)
{
    if (vis[v])
    {
        return c[v];
    }
    vis[v] = true;
    ll s = 0;
    for (auto u : adj[v])
    {
        s += dfs(u);
    }
    if (!adj[v].empty())
    {
        c[v] = min(c[v], s);
    }
    return c[v];
}

void solve()
{
    int k, n;
    cin >> k >> n;
    for (int i = 0; i < k; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        c[p - 1] = 0;
    }
    for (int i = 0; i < k; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int e;
            cin >> e;
            adj[i].push_back(e - 1);
        }
    }
    for (int i = 0; i < k; i++)
    {
        vis[i] = false;
    }
    for (int i = 0; i < k; i++)
    {
        dfs(i);
    }
    for (int i = 0; i < k; i++)
    {
        if (i != k - 1)
        {
            cout << c[i] << " ";
        }
        else
        {
            cout << c[i] << "\n";
        }
    }
    for (int i = 0; i < k; i++)
    {
        adj[i].clear();
        c[i] = 0;
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