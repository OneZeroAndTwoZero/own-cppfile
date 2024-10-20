#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,q,x,pos = 0,ans = 0;
int num[1000006];
int pri[2000006];
int minn[2000006];
bool p[6000007];
unordered_map<int,int> f;
vector<int> a;

void Olashai(int n){
    for(int i = 2;i <= n;i++){
        if(!p[i]){
            minn[i] = i;
            pri[pos ++] = i;
        }
        for(int j = 0;j < pos && pri[j] <= n / i;j ++){
            p[i * pri[j]] = 1;
            minn[i * pri[j]] = pri[j];
            if(i % pri[j] == 0) break;
        }
    }
}

void updatedfs(int k,int num){
    f[num] ++;
    if(k == a.size()) return;
    updatedfs(k + 1,num);
    updatedfs(k + 1,num * a[k]);
}

void update(int x){
    a.clear();
    while(x != 1){
        a.push_back(minn[x]);
        int cur = minn[x];
        while(x != 1 && x % cur == 0){
            x /= cur;
        }
    }
    updatedfs(0,1);
}

void querydfs(int k,int sum,int cnt){
    if(k == a.size()){
        // printf("%d %d;;;;;\n",sum,cnt);
        if(cnt & 1) ans += f[sum];
        else if(cnt) ans -= f[sum];
        return;
    }
    querydfs(k + 1,sum,cnt);
    querydfs(k + 1,sum * a[k],cnt + 1);
}

void query(int x){
    a.clear();
    ans = 0;
    while(x != 1){
        a.push_back(minn[x]);
        int cur = minn[x];
        while(x != 1 && x % cur == 0){
            x /= cur;
        }
    }
    querydfs(0,1,0);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    Olashai(500000);
    for(int i = 0;i < n;i ++){
        scanf("%d",&num[i]);
        update(num[i]);
    }
    scanf("%d",&q);
    while(q --){
        scanf("%d",&x);
        query(x);
        printf("%d\n",ans);
    }

    return 0;
}