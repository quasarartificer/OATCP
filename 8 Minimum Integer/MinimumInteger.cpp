/*
Problem Name: Minimum Integer
Author: Vineet Motwani
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007
#define vll vector<int>

string smallest_number(string& num, int k) {
    string ans;
    stack<char> st;
    int n = num.length();
    for(int i=0; i<n; i++) {
        while(!st.empty() and st.top() > num[i] and k > 0) {
            st.pop();
            k--;
        }
        if(st.empty() and num[i] == '0')
            continue;
        st.push(num[i]);
    }
    while(!st.empty() and k > 0) {
        st.pop();
        k--;
    }
    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

signed main() {
    string num;
    cin>>num;
    int k;
    cin>>k;
    if(k==num.length()) {
        cout<<"0"<<endl;
        return 0;
    }
    cout<<smallest_number(num, k)<<endl;
    return 0;
}