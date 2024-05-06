/*
Problem Name: Maximum Ice Bars
Author: Vineet Motwani
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007
#define vll vector<int>

signed main() {
    int n;
    cin>>n;
    vll costs(n);
    for(int i=0; i<n; i++) 
        cin>>costs[i];
    int initial_coins = 0;
    cin>>initial_coins;
    sort(costs.begin(), costs.end());
    int total_bars = 0;
    for(int i=0; i<n; i++) {
        if(initial_coins >= costs[i]) {
            initial_coins -= costs[i];
            total_bars++;
        }
        else
            break;
    }
    cout<<total_bars<<endl;
    return 0;
}