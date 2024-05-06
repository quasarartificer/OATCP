#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007
#define vll vector<int>

int dp[101][101];
 
int a[101];
int b[101];
 
int n,m;
 
int fn(int i, int j)
{
    if(i>=n or j>=m)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    int o1=0, o2, o3;
    if(abs(a[i]-b[j])<=1)
        o1 = 1 + fn(i+1,j+1);
    o2 = fn(i+1, j);
    o3 = fn(i, j+1);
    return dp[i][j] = max({o1,o2,o3});
}

signed main() {
    memset(dp, -1, sizeof(dp));
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    for(int i=0; i<m; i++)
        cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);

    cout<<fn(0,0);
    return 0;
}