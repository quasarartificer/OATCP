/*
Problem Name: Patching Array
Author: Vineet Motwani
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007
#define vll vector<int>

vll string_to_vector(string& s) {
    vll nums;
    string num;
    for(char c: s) {
        if(c==',' or c==' ') {
            nums.push_back(stoll(num));
            num = "";
        }
        else
            num += c;
    }
    nums.push_back(stoll(num));
    return nums;
}

int minimum_patches(vll& nums, int n) {
    int ans=0, i=0;
    int sum=0;
    int sz=nums.size();
    while(sum<n) {
        if(i<sz and nums[i]<=sum+1) {
            sum+=nums[i];
            i++;
        }
        else {
            sum+=sum+1;
            ans++;
        }
    }
    return ans;
}

signed main() {
    string s;
    getline(cin, s);
    vll nums = string_to_vector(s);
    int n;
    cin>>n;
    cout<<minimum_patches(nums, n);
    return 0;
}