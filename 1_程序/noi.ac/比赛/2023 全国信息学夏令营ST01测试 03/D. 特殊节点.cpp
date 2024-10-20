#include<bits/stdc++.h>
using namespace std;

struct node{
    int id;
    int st;
};

int n,k;
int u,v;
vector<int> a[200005];
bool ok[200005] = {0};
bool vis15[20] = {0};
int ans = 0x3f3f3f3f;

int dir_(int x){
    queue<node> q;
    q.push({x,0});
    while(q.size()){
        node t = q.front();
        q.pop();
        if(ok[t.id]){
            return t.st;
        }
        for(auto && i : a[t.id]){
            if(!vis15[i]){
                vis15[i] = 1;
                q.push({i,t.st + 1});
            }
        }
    }
    return 0;
}

bool check(){
    if(k == 1) return 1;
    for(int i = 1;i <= n;i ++){
        bool res = 0;
        for(auto && y : a[i]){
            if(ok[y]) res = 1;
        }
        if(ok[i] && res == 0) return 0;
    }
    return 1;
}

void dfs(int s,int f){
    if(s == n + 1){
        if(f == k){
            //cout << ";;;;;\n";
            if(check()){
                //cout << "[][]\n";
                int cnt = 0;
                for(int i = 1;i <= n;i ++){
                    if(ok[i] == 1) continue;
                    memset(vis15,0,sizeof(vis15));
                    cnt = max(cnt,dir_(i));
                }
                //cout << cnt << ";;;\n";
                ans = min(ans,cnt);
            }
        }
        return;
    }
    if(f > k) return;
    dfs(s + 1,f);
    ok[s] = 1;
    dfs(s + 1,f + 1);
    ok[s] = 0;
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&k);
    for(int i = 0;i < n - 1;i ++){
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    if(n <= 15){
        dfs(1,0);
        printf("%d\n",ans);
    }

	return 0;
}
