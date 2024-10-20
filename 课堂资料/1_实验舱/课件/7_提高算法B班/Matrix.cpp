#include <bits/stdc++.h>
#define MOD 1000000007
typedef long long LL;
using namespace std;
struct Matrix
{
    LL data[31][31], r, c;
    Matrix() { memset(data, 0, sizeof data); }
    Matrix(int _r, int _c) : r(_r), c(_c) { memset(data, 0, sizeof data); }

    Matrix operator+(const Matrix &t) const
    {
        Matrix res;
        for (int i = 1; i <= r; ++i)
            for (int j = 1; j <= c; ++j)
                res.data[i][j] = (data[i][j] + t.data[i][j]) % MOD;
        return res;
    }

    // Matrix operator*(const Matrix &t) const
    // {
    //     Matrix res;
    //     res.r = r, res.c = t.c;
    //     for (int i = 1; i <= r; i++)
    //         for (int j = 1; j <= t.c; j++)
    //             for (int k = 1; k <= t.r; k++)
    //                 res.data[i][j] = (res.data[i][j] + data[i][k] * t.data[k][j] % MOD) % MOD;
    //     return res;
    // }

    Matrix operator*(const Matrix &t) const
    {
        Matrix res;
        res.r = r, res.c = t.c;
        for (int i = 1; i <= r; i++)
            for (int k = 1; k <= t.r; k++)
            {
                LL tmp = data[i][k];
                for (int j = 1; j <= t.c; j++)
                    res.data[i][j] = (res.data[i][j] + tmp * t.data[k][j] % MOD) % MOD;
            }
        return res;
    }

    Matrix operator^(LL x) const
    {
        Matrix res(r, r), base(r, r);
        for (int i = 1; i <= r; i++)
            res.data[i][i] = 1;
        for (int i = 1; i <= r; ++i)
            for (int j = 1; j <= c; ++j)
                base.data[i][j] = data[i][j] % MOD;
        while (x)
        {
            if (x & 1)
                res = res * base;
            base = base * base;
            x >>= 1;
        }
        return res;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("data/data1.in", "r", stdin);
    // freopen("data/data1.out", "w", stdout);
#endif
    int n, m, p;
    scanf("%d%d%d", &n, &p, &m);
    Matrix a(n, p), b(p, m), c(n, m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= p; j++)
        {
            scanf("%lld", &a.data[i][j]);
            a.data[i][j] = (a.data[i][j] + MOD) % MOD;
        }
    for (int i = 1; i <= p; i++)
        for (int j = 1; j <= m; j++)
        {
            scanf("%lld", &b.data[i][j]);
            b.data[i][j] = (b.data[i][j] + MOD) % MOD;
        }
    c = a * b;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cout << c.data[i][j] << " \n"[j == m];
    return 0;
}