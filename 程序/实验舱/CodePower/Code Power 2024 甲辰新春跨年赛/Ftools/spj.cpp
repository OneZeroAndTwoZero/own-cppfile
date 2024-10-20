#include "testlib.h"
#ifdef TY
#include "/Users/ty/Desktop/code/ty.h"
#else
#include <bits/stdc++.h>
#endif
using namespace std;
#define MAXN 510
int N, M, K, T, n, m, k, t, point = 100, b[MAXN][MAXN], u, v, w, cnt1[MAXN], cnt2[MAXN], d1[MAXN], d2[MAXN], wcnt;
bool ok, vis[MAXN], ask[MAXN][MAXN], weight[110];
void dij(int st, int cnt[], int d[])
{
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
  memset(vis, false, sizeof vis);
  d[st] = 0;
  cnt[st] = 1;
  q.push({d[st], st});
  while (q.size())
  {
    auto u = q.top();
    int x = u.second;
    q.pop();
    if (vis[x])
      continue;
    vis[x] = true;
    for (int i = 0; i < n; i++)
    {
      if (x != i && b[x][i])
      {
        if (d[i] > d[x] + b[x][i])
        {
          d[i] = d[x] + b[x][i];
          cnt[i] = cnt[x];
          q.push({d[i], i});
        }
        else if (d[i] == d[x] + b[x][i])
          cnt[i] += cnt[x];
      }
    }
  }
}
int main(int argc, char *argv[])
{
  registerTestlibCmd(argc, argv);
  N = inf.readInt(), M = inf.readInt(), K = inf.readInt(), T = inf.readInt();
  n = ouf.readInt(N, N, "N"),
  m = ouf.readInt(M, M, "M"),
  k = ouf.readInt(K, K, "K"),
  ouf.readEoln();
  for (int i = 1; i <= m; i++)
  {
    u = ouf.readInt(0, n - 1, "u"),
    v = ouf.readInt(0, n - 1, "v"),
    w = ouf.readInt(1, 100, "w"),
    ouf.readEoln();
    if (!weight[w])
      wcnt++, weight[w] = true;
    quitif(u == v || b[u][v] || b[v][u], _wa, "self-loop or multiple edges");
    b[u][v] = b[v][u] = w;
  }
  quitif(wcnt < 5, _wa, "no less than 5 weights!");
  memset(d1, 0x3f, sizeof d1);
  dij(0, cnt1, d1);
  for (int i = 0; i < n; i++)
    quitif(d1[i] == 0x3f3f3f3f, _wa, "disconnected!");
  t = ouf.readInt(T, T, "T"), ouf.readEoln();
  for (int i = 1; i <= t; i++)
  {
    ok = false;
    u = ouf.readInt(0, n - 1, "x"),
    v = ouf.readInt(0, n - 1, "y"),
    ouf.readEoln();
    quitif(u == v || ask[u][v] || ask[v][u], _wa, "x equals to y or repeated queries");
    ask[u][v] = ask[v][u] = true;
    for (int j = 0; j < n; j++)
      d1[j] = d2[j] = 0x3f3f3f3f, cnt1[j] = cnt2[j] = 0;
    dij(u, cnt1, d1), dij(v, cnt2, d2);
    for (int j = 0; j < n; j++)
      if (d1[j] + d2[j] == d1[v] &&
          cnt1[j] * cnt2[j] >= k &&
          j != v && j != u)
      {
        ok = true;
        break;
      }
    if (!ok)
      point -= 10;
  }
  if (point == 100)
    quitf(_ok, "good job!");
  else
    quitp(max(30, point), "found " + to_string((100 - point) / 10) + " \"None\"s");
  return 0;
}
