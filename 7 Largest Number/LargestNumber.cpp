/*
Problem Name: Largest Number
Author: Vineet Motwani
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007
#define vll vector<int>

void obtainInputs(string& s, vll& inputs) {
    int n = s.length();
    int num;
    for(int i=0; i<n; i++) {
        num = 0;
        while(i<n and s[i] != ' ') {
            num = num*10 + (s[i]-'0');
            i++;
        }
        inputs.push_back(num);
    }
}

string LargestNumber(vll& inputs) {
    int n = inputs.size();
    vector<string> nums;
    for(int i=0; i<n; i++)
        nums.push_back(to_string(inputs[i]));
    sort(nums.begin(), nums.end(), [](string a, string b) {
        return (a+b) > (b+a);
    });
    string result = "";
    for(int i=0; i<n; i++)
        result += nums[i];
    return result;

}

signed main() {
    string s;
    getline(cin, s);
    vll inputs;
    obtainInputs(s, inputs);
    string result = LargestNumber(inputs);
    cout<<result<<endl;
    return 0;
}