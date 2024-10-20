#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

long long n,mod;

struct Matrix{
    long long data[5][5];
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

    scanf("%lld %lld",&n,&mod);
    Matrix ans(2,1),cur(2,2);
    ans.data[1][1] = ans.data[2][1] = 1;
    cur.data[1][1] = cur.data[1][2] = cur.data[2][1] = 1;
    cur.data[2][2] = 0;
    cur = cur ^ (n - 1);
    ans = ans * cur;
    printf("%lld\n",ans.data[1][1]);

    return 0;
}