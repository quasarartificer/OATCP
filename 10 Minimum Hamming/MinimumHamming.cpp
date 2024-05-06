/*
Problem Name: Minimum Hamming
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

signed main() {
    string s;
    getline(cin, s);
    vll input = string_to_vector(s);
    int ans = 0;
    int n = input.size();
    for(int i=0; i<32; i++) {
        int ones = 0, zeros = 0;
        for(int j=0; j<n; j++) {
            if(input[j] & (1<<i))
                ones++;
            else
                zeros++;
        }
        ans += ones*zeros;
    }
    cout<<ans<<endl;
    return 0;
}