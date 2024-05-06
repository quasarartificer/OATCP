/*
Problem Name: Maximum Flow
Author: Vineet Motwani
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007
#define vll vector<int>

int n;

bool bfs(vector<vll>& rG, int s, int t, int pp[]) {
  bool vis[n+1] = {0};
  queue<int> q;
  q.push(s);
  vis[s] = 1;
  pp[s] = -1;

  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (int v=1; v<=n; v++) {
      if (vis[v] == false and rG[u][v]>0) {
        if (v==t) {
          pp[v] = u;
          return true;
        }
        q.push(v);
        pp[v] = u;
        vis[v] = true;
      }
    }
  }
  return false;
}

int flow_check(vector<vll>& gg, int s, int t) {
  int u, v;
  vector<vll> rG(n+1, vll(n+1, 0));
  for (u=1; u<=n; u++)
    for (v=1; v<=n; v++)
      rG[u][v] = gg[u][v];

  int pp[n+1];
  int maxi = 0;
  while (bfs(rG, s, t, pp)) {
    int pf = INT_MAX;
    for (v=t; v!=s; v=pp[v]) {
      u = pp[v];
      pf = min(pf, rG[u][v]);
    }
    for (v=t; v!=s; v=pp[v]) {
      u = pp[v];
      rG[u][v] -= pf;
      rG[v][u] += pf;
    }
    maxi += pf;
  }
  return maxi;
}

signed main() {
  int s, d;
  cin>>n;
  cin>>s>>d;
  vector<vll> gg(n+1, vll(n+1, 0));
  int n1, n2, cc;
  while (1) {
    cin>>n1;
    if (n1==-1)
      break;
    cin>>n2>>cc;
    gg[n1][n2] = cc; 
  }
  cout<<flow_check(gg, s, d)<<endl;
  return 0;
}