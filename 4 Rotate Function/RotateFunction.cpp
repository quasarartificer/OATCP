#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007
#define vll vector<int>

signed main() {
    int n;
    cin>>n;
    if(n<=0) {
        if(n==1) {
            int x;
            cin>>x;
        }
        cout<<0;
        return 0;
    }
    vll nums(n);
    for(int i=0; i<n; i++)
        cin>>nums[i];
    vector<int> dp(n, 0);
    int sum=0;
    for(int i=0; i<n; i++){
        sum += nums[i];
        dp[0] += (i*nums[i]);
    }

    int ans=dp[0], idx=n-1;
    for(int i=1; i<n; i++){
        dp[i] = sum + dp[i-1]-(n*nums[idx]);
        --idx;
        ans=max(dp[i],ans);
    }
    cout<<ans;
    return 0;
}