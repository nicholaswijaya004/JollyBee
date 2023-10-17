#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    pair<pair<ll,int>,int > a[n+2];
    for (int i=0; i<n; i++) {
        cin >> a[i].first.first;
        a[i].first.second=i;
    }
    sort(a, a+n);
    for (int i=0; i<n; i++) {
        a[i].second=n-i;
    }
    sort(a, a+n,[](auto &left, auto &right) {
        return left.first.second < right.first.second;
    });
    for (int i=0; i<n; i++) {
        if (i!=n-1) {
            cout << a[i].second << " ";
        } else {
            cout << a[i].second << "\n";
        }
    }
}
 
int main() {
    int tc=1;
    cin >> tc;
    while(tc--) {
        solve();
    }
}
