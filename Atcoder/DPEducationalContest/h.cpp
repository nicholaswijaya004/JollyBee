#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod = 1e9+7;

void solve() {
    int h, w;
    cin >> h >> w;
    char grid[h+2][w+2];
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            cin >> grid[i][j];
        }
    }
    ll dp[h+2][w+2];
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            dp[i][j]=0;
        }
    }
    dp[0][0]=1;
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            if (grid[i][j]=='#') {
                dp[i][j]=0;
            } else {
                if (i>0) {
                    dp[i][j]+=dp[i-1][j];
                }
                if (j>0) {
                    dp[i][j]+=dp[i][j-1];
                }
            }
            dp[i][j]%=mod;
        }
    }
    cout << dp[h-1][w-1] << "\n";
}

int main() {
    int tc=1;
    // cin >> tc;
    while(tc--) {
        solve();
    }
}
