#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007
#define vll vector<int>

signed main() {
    int n;
    cin>>n;
    if (n==0) {
        cout<<0;
        return 0;
    }
    vector<int> nums(n);
    for (int i=0; i<n; i++)
        cin>>nums[i];
    int ans = LLONG_MIN;
    int dp=1;

    for(int i=0; i<n; i++) {
        dp *= nums[i];
        ans = max(ans, dp);
        if (nums[i]==0)
            dp = 1;
    }
    dp=1;
    for (int i=n-1; i>=0; i--) {
        dp *= nums[i];
        ans = max(ans, dp);
        if (nums[i]==0)
            dp=1;
    }
    cout<<ans;
    return 0;
}