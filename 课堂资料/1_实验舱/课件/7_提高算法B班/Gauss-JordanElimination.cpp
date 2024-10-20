#include <bits/stdc++.h>
#define EPS 1e-9
using namespace std;
int n;
double a[105][105];
int Gauss_Jordan()
{
  int r = 1;
  for (int c = 1; c <= n; c++)
  {
    int t = r;
    for (int i = r; i <= n; i++)
      if (abs(a[i][c]) > abs(a[t][c]))
        t = i;
    if (abs(a[t][c]) < EPS)
      continue;
    swap(a[r], a[t]);
    for (int i = 1; i <= n; i++)
      if (abs(a[i][c]) > EPS && i != r)
        for (int j = n + 1; j >= c; j--)
          a[i][j] -= a[i][c] * a[r][j] / a[r][c];
    r++;
  }
  if (r < n + 1)
  {
    for (int i = r; i <= n; i++)
      if (abs(a[i][n + 1] / a[i][i]) > EPS)
        return 2;
    return 1;
  }
  return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("data/data1.in", "r", stdin);
// freopen("data/data1.out", "w", stdout);
#endif
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n + 1; j++)
      scanf("%lf", &a[i][j]);
  int res = Gauss_Jordan();
  if (res == 2)
    puts("No Answer");
  else if (res == 1)
    puts("INF");
  else
    for (int i = 1; i <= n; i++)
      printf("x%d=%.2lf\n", i, abs(a[i][n + 1] / a[i][i]) < EPS ? 0 : a[i][n + 1] / a[i][i]);
  return 0;
}