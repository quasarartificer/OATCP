/*
Problem Name: Count Subgrids
Author: Vineet Motwani
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007
#define vll vector<int>

int count_subgrids(const vector<vector<bool>>& grid, int n) {
    int subgrids = 0;
    for(int a=0; a<n; ++a) {
        for(int b=a+1; b<n; ++b) {
            int count=0;
            for(int i=0; i<n; ++i) {
                if(grid[a][i]==1 && grid[b][i]==1)
                    ++count;
            }
            subgrids += ((count-1)*count)/2;
        }
    }
    return subgrids;
}

signed main() {
    int n;
    cin>>n;
    vector<vector<bool>> grid(n, vector<bool>(n));
    for(int i=0; i<n; i++) {
        int inp;
        for(int j=0; j<n; j++) {
            cin>>inp;
            grid[i][j] = (inp==1);
        }
    }
    cout<<count_subgrids(grid, n)<<endl;
    return 0;
}