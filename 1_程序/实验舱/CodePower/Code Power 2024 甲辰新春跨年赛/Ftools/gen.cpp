#ifdef TY
#include "/Users/ty/Desktop/code/ty.h"
#else
#include <bits/stdc++.h>
#endif
using namespace std;
mt19937_64 rnd(chrono::steady_clock::now().time_since_epoch().count());
int rad(int l, int r) { return uniform_int_distribution<int>(l, r)(rnd); }
int a[510][510], n, m, k, u, v, w, t;
bool vis[510][510];
int main()
{
  ios::sync_with_stdio(false);
  cin >> n >> m >> k >> t;
  cout << t << "\n"; // 需要的t
  cout << n << " " << m << " " << k << "\n";
  for (int i = 1; i < n; i++) // 保证连通
  {
    v = rad(0, i - 1), w = (i <= 5 ? i : rad(1, 5)); // 凑5个边权
    cout << i << " " << v << " " << w << "\n";
    a[i][v] = a[v][i] = w;
  }
  for (int i = 1; i <= m - n + 1; i++)
  {
    u = rad(0, n - 1), v = rad(0, n - 1), w = rad(1, 5);
    while (u == v || a[u][v] || a[v][u]) // 保证没有重边或自环
      u = rad(0, n - 1), v = rad(0, n - 1);
    a[u][v] = a[v][u] = w;
    cout << u << " " << v << " " << w << "\n";
  }
  t = min(500, (n - 1) * (n - 1) / 2); // 管他这么多?干就完了
  cout << t << "\n";
  for (int i = 1; i <= t; i++)
  {
    u = rad(0, n - 1), v = rad(0, n - 1);
    while (u == v || vis[u][v] || vis[v][u]) // 保证没有重复询问
      u = rad(0, n - 1), v = rad(0, n - 1);
    vis[u][v] = vis[v][u] = 1;
    cout << u << " " << v << "\n";
  }
  return 0;
}