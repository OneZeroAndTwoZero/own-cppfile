#ifdef TY
#include "/Users/ty/Desktop/code/ty.h"
#else
#include <bits/stdc++.h>
#endif
using namespace std;
namespace IO
{
  static int Len = 0, _t;
  char out[1 << 25]; // 32MB
  template <typename T>
  inline void read(T &x)
  {
    char ch = getchar();
    x = 0, _t = 0;
    while (ch < '0' || ch > '9')
      _t |= ch == '-', ch = getchar();
    while (ch >= '0' && ch <= '9')
      x = x * 10 + (ch ^ 48), ch = getchar();
    x = _t ? -x : x;
  }
  template <typename T, typename... Args>
  inline void read(T &x, Args &...args) { read(x), read(args...); }
  inline void putc(char ch) { out[Len++] = ch; }
  template <typename T>
  inline void write(T x)
  {
    if (x < 0)
      putc('-'), x = -x;
    if (x > 9)
      write(x / 10);
    out[Len++] = x % 10 + 48;
  }
  inline void flush() { fwrite(out, 1, Len, stdout), Len = 0; }
}
using namespace IO;
int n, k, m, t, u[130010], v[130010], w[130010], cnt[510][510], d[510][510], x, y, acnt, T;
bool vis[510];
vector<pair<int, int>> a[510], ans;
void dij(int st) // 统计点与点之间最短路条数
{
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
  for (int i = 0; i < n; i++)
    vis[i] = false, d[st][i] = 0x3f3f3f3f;
  d[st][st] = 0;
  cnt[st][st] = 1;
  q.push({d[st][st], st});
  while (q.size())
  {
    auto u = q.top();
    int x = u.second;
    q.pop();
    if (vis[x])
      continue;
    vis[x] = true;
    for (auto v : a[x])
    {
      int i = v.first, w = v.second;
      if (d[st][i] > d[st][x] + w)
      {
        d[st][i] = d[st][x] + w;
        cnt[st][i] = cnt[st][x];
        q.push({d[st][i], i});
      }
      else if (d[st][i] == d[st][x] + w)
        cnt[st][i] += cnt[st][x];
    }
  }
}
int main()
{
  ios::sync_with_stdio(false);
  read(t); // 获取需要的组数
  read(n, m, k);
  for (int i = 1; i <= m; i++)
  {
    read(u[i], v[i], w[i]);
    a[u[i]].push_back({v[i], w[i]});
    a[v[i]].push_back({u[i], w[i]});
  }
  read(T);
  for (int i = 0; i < n; i++)
    dij(i);
  for (int i = 1; i <= T; i++)
  {
    read(x, y);
    for (int j = 0; j < n; j++)
      if (d[x][j] + d[y][j] == d[x][y] &&
          cnt[x][j] * cnt[y][j] >= k &&
          j != x && j != y) // 判断是否为中转站
      {
        acnt++;
        ans.push_back({x, y});
        break;
      }
    if (acnt == t) // 如果凑满了就结束
      break;
  }
  cerr << acnt << endl;
  if (acnt < t) // 很多组询问中都没有凑满需要的组数就异常退出
    exit(1);
  // 凑满了就输出到 .ans 文件中
  cout << n << " " << m << " " << k << "\n";
  for (int i = 1; i <= m; i++)
    cout << u[i] << " " << v[i] << " " << w[i] << "\n";
  cout << t << "\n";
  for (auto i : ans)
    cout << i.first << " " << i.second << "\n";
  return 0;
}