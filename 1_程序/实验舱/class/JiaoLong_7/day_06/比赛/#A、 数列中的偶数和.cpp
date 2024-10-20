#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int T;
long long n,a,b,mod = 1000000007;

struct Matrix{
    long long data[6][6];
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
        for(int i = 1;i <= r;i ++){
            res.data[i][i] = 1;
        }
        for(int i = 1;i <= r;i ++){
            for(int j = 1;j <= c;j ++){
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

    void putout(){
        for(int i = 1;i <= r;i ++){
            for(int j = 1;j <= c;j ++){
                printf("%lld%c",data[i][j]," \n"[j == c]);
            }
        }
        printf("\n");
    }
};

void solve1(){
    Matrix ans(3,1),cur(3,3);
    ans.data[1][1] = a % mod,ans.data[2][1] = b % mod,ans.data[3][1] = 0;
    // printf("%lld %lld %lld\n",ans.data[1][1],ans.data[2][1],ans.data[3][1]);
    cur.data[1][1] = 0,cur.data[1][2] = 1,cur.data[1][3] = 0;
    cur.data[2][1] = 1,cur.data[2][2] = 1,cur.data[2][3] = 0; 
    cur.data[3][1] = 1,cur.data[3][2] = 0,cur.data[3][3] = 1;
    cur = cur ^ n;
    // cur.putout();
    ans = cur * ans;
    printf("%lld\n",ans.data[3][1] % mod);
}

void solve2(){
    Matrix ans(4,1),cur(4,4);
    ans.data[1][1] = a % mod,ans.data[2][1] = b % mod,ans.data[3][1] = (a + b) % mod,ans.data[4][1] = 0;
    // printf("%lld %lld %lld %lld\n\n",ans.data[1][1],ans.data[2][1],ans.data[3][1],ans.data[4][1]);
    cur.data[1][1] = 0,cur.data[1][2] = 1,cur.data[1][3] = 1,cur.data[1][4] = 0;
    cur.data[2][1] = 0,cur.data[2][2] = 1,cur.data[2][3] = 2,cur.data[2][4] = 0;
    cur.data[3][1] = 0,cur.data[3][2] = 2,cur.data[3][3] = 3,cur.data[3][4] = 0;
    cur.data[4][1] = 1,cur.data[4][2] = 0,cur.data[4][3] = 0,cur.data[4][4] = 1;
    cur = cur ^ ((n + 2) / 3);
    // cur.putout();
    ans = cur * ans;
    printf("%lld\n",ans.data[4][1] % mod);
}

void solve3(){
    Matrix ans(4,1),cur(4,4);
    ans.data[1][1] = a % mod,ans.data[2][1] = b % mod,ans.data[3][1] = (a + b) % mod,ans.data[4][1] = 0;
    // printf("%lld %lld %lld %lld\n\n",ans.data[1][1],ans.data[2][1],ans.data[3][1],ans.data[4][1]);
    cur.data[1][1] = 0,cur.data[1][2] = 1,cur.data[1][3] = 1,cur.data[1][4] = 0;
    cur.data[2][1] = 0,cur.data[2][2] = 1,cur.data[2][3] = 2,cur.data[2][4] = 0;
    cur.data[3][1] = 0,cur.data[3][2] = 2,cur.data[3][3] = 3,cur.data[3][4] = 0;
    cur.data[4][1] = 0,cur.data[4][2] = 1,cur.data[4][3] = 0,cur.data[4][4] = 1;
    cur = cur ^ ((n + 1) / 3);
    // cur.putout();
    ans = cur * ans;
    printf("%lld\n",ans.data[4][1] % mod);
}

void solve4(){
    Matrix ans(4,1),cur(4,4);
    ans.data[1][1] = a % mod,ans.data[2][1] = b % mod,ans.data[3][1] = (a + b) % mod,ans.data[4][1] = 0;
    // printf("%lld %lld %lld %lld\n\n",ans.data[1][1],ans.data[2][1],ans.data[3][1],ans.data[4][1]);
    cur.data[1][1] = 0,cur.data[1][2] = 1,cur.data[1][3] = 1,cur.data[1][4] = 0;
    cur.data[2][1] = 0,cur.data[2][2] = 1,cur.data[2][3] = 2,cur.data[2][4] = 0;
    cur.data[3][1] = 0,cur.data[3][2] = 2,cur.data[3][3] = 3,cur.data[3][4] = 0;
    cur.data[4][1] = 0,cur.data[4][2] = 0,cur.data[4][3] = 1,cur.data[4][4] = 1;
    cur = cur ^ (n / 3);
    // cur.putout();
    ans = cur * ans;
    printf("%lld\n",ans.data[4][1] % mod);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%lld %lld %lld",&n,&a,&b);
        if(a % 2 == 0 && b % 2 == 0){
            solve1();
        }else if(a % 2 == 0 && b % 2 == 1){
            solve2();
        }else if(a % 2 == 1 && b % 2 == 0){
            solve3();
        }else if(a % 2 == 1 && b % 2 == 1){
            solve4();
        }
    }

    return 0;
}