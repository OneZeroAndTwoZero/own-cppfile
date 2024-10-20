#include<bits/stdc++.h>
using namespace std;

int T;
long long x,y,p,q;
long long A,B,C,D,cur,X,Y;
long long ans;
int vis[1000005];

long long exgcd(long long a,long long b,long long &x,long long &y){
    if(b == 0){
        x = abs(D - C),y = 0;
        return a;
    }
    int res = exgcd(b,a % b,y,x);
    y -= a / b * x;
    return res;
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
        ans = 0x3f3f3f3f3f3f3f3f;
        scanf("%lld %lld %lld %lld",&x,&y,&p,&q);
        if(x <= 500 && y <= 500 && p <= 500 && q <= 500){
            memset(vis,0,sizeof(vis));
            int cnt = 0;
            bool is = 1;
            for(int i = 0;i <= 100000;i ++){
                if(i % (p + q) >= p) vis[i] = 1;
            }
            while(cnt <= 100000){
                if(cnt % (2 * x + 2 * y) >= x && cnt % (2 * x + 2 * y) < x + y){
                    if(vis[cnt]){
                        printf("%d\n",cnt);
                        is = 0;
                        break;
                    }
                }
                cnt ++;
            }
            if(is) printf("-1\n");
        }else{
            A = 2 * x + 2 * y;
            B = p + q;
            for(int i = 0;i < y;i ++){
                for(int j = 0;j < q;j ++){
                    C = x + i;
                    D = p + j;
                    cur = abs(__gcd(A,-B));
                    // cout << abs(D - C) << "[][]" << cur << "\n";
                    if(abs(D-C) % cur){
                        continue;
                    }
                    exgcd(A,B,X,Y);
                    // cout << X << "[][][]\n";
                    long long newB = abs(B) / abs(__gcd(A,-B));
                    X = ((X % newB) + newB) % newB;
                    // cout << A << " " << B << " " << C << "  " << D << " " << X << "\n";
                    ans = min(ans,A * X + C);
                }
            }
            if(ans == 0x3f3f3f3f3f3f3f3f) printf("-1\n");
            else printf("%lld\n",ans);
        }
    }

    return 0;
}
