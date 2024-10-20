// 由于第10行数组过大,本地可能无法运行
#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,m,p;
long long mod = 1000000007;

struct Matrix{
    long long data[505][505];
    int r,c;

    Matrix(){
        memset(data,0,sizeof(data));
    }
    Matrix(int _r,int _c) : r(_r),c(_c){
        memset(data,0,sizeof(data));
    }

    void __init(){
        for(int i = 0;i <= r;i ++){
            for(int j = 0;j <= c;j ++){
                data[i][j] = 0;
            }
        }
    }

    Matrix operator + (const Matrix &t) const{
        Matrix res;
        res.__init();
        for(int i = 1;i <= r;i ++){
            for(int j = 1;j <= c;j ++){
                res.data[i][j] = (data[i][j] + t.data[i][j]) % mod;
            }
        }
        return res;
    }

    Matrix operator * (const Matrix &t) const{
        Matrix res(r,t.c);
        res.__init();
        for(int i = 1;i <= r;i ++){
            for(int j = 1;j <= t.c;j ++){
                for(int k = 1;k <= t.r;k ++){
                    res.data[i][j] = (res.data[i][j] + data[i][k] * t.data[k][j] % mod) % mod;
                }
            }
        }
        return res;
    }

    Matrix operator ^ (long long x) const{
        Matrix res(r,r),base(r,r);
        res.__init(),base.__init();
        for(int i = 1;i <= r;i ++){
            res.data[i][i] = 1;
        }
        for(int i = 1;i <= r;i ++){
            for(int j = 1; j <= c;j ++){
                base.data[i][j] = data[i][j] % mod;
            }
        }
        while(x){
            if(x & 1){
                res = res * base;
            }
            base = base * base;
            x >>= 1;
        }
        return res;
    }
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n,&p,&m);
    Matrix a(n,p),b(p,m),c(n,m);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= p;j ++){
            scanf("%lld",&a.data[i][j]);
            a.data[i][j] = (a.data[i][j] + mod) % mod;
        }
    }
    for(int i = 1;i <= p;i ++){
        for(int j = 1;j <= m;j ++){
            scanf("%lld",&b.data[i][j]);
            b.data[i][j] = (b.data[i][j] + mod) % mod;
        }
    }
    c = a * b;
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            printf("%lld%c",c.data[i][j]," \n"[j == m]);
        }
    }

    return 0;
}