#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn=400;
long double dp[maxn][maxn][maxn];
int n;

double mem(int x, int y, int z) {
    if (x<0 || y<0|| z<0) {
        return 0;
    }
    if (x==0 && y==0 && z==0) {
        return 0;
    }
    if (dp[x][y][z]>0) {
        return dp[x][y][z];
    }
    long double ret = n+x*mem(x-1, y, z)+y*mem(x+1, y-1, z)+z*mem(x, y+1, z-1);
    dp[x][y][z]=ret/(x+y+z);
    return dp[x][y][z];
}

void solve() {
    cin >> n;
    ll a[n+2];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    ll f[4]={0,0,0,0};
    for (int i=0; i<n; i++) {
        f[a[i]-1]++;
    }
    cout << fixed << setprecision(10) << mem(f[0], f[1], f[2]) << endl;
}

int main() {
    int tc=1;
    // cin >> tc;
    while(tc--) {
        solve();
    }
}