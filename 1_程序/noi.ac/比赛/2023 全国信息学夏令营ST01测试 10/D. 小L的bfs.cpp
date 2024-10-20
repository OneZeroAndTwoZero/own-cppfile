#include<bits/stdc++.h>
using namespace std;

struct node{
    int id;
    int st;
};

int n,m,s;
int a[300005] = {0};
bool vis[300005] = {0};
int ans[300005] = {0};
int l,r;

bool check(int f,int pos){
    if(abs(pos - f) - 1 > m) return 0;
    if(f <= 0 || pos <= 0 || f > n || pos > n) return 0;
    if(m & 1){
        int mid = (f + pos) >> 1;
        if((mid - m / 2) <= 0 || (mid + m / 2) > n){
            return 0;
        }
    }else{
        int mid = (f + pos) >> 1;
        if((mid - m / 2 + 1) <= 0 || (mid + m / 2) > n){
            return 0;
        }
    }
    return 1;
}

void bfs(){
    queue<node> q;
    q.push({s,0});
    vis[s] = 1;
    ans[s] = 0;
    while(q.size()){
        node t = q.front();
        q.pop();
        int f = t.id;
        for(int i = l - 1;i > 0;i --){
            if((m & 1) && (abs(i - f) & 1) || !(m & 1) && !(abs(i - f) & 1)){
                continue;
            }
            if(abs(i - f) - 1 > m) break;
            if(!check(f,i)) continue;
            l = i;
            if(!a[i]) continue;
            ans[i] = t.st + 1;
            q.push({i,t.st + 1}); 
        }
        for(int i = r + 1;i <= n;i ++){
            if(!a[i] || (m & 1) && (abs(i - f) & 1) || !(m & 1) && !(abs(i - f) & 1)){
                continue;
            }
            if(abs(i - f) - 1 > m) break;
            if(!check(f,i)) continue;
            r = i;
            if(!a[i]) continue;
            ans[i] = t.st + 1;
            q.push({i,t.st + 1});
        }
    }
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d %d",&n,&m,&s);
    l = s,r = s;
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        ans[i] = -1;
    }
    bfs();
    for(int i = 1;i <= n;i ++){
        printf("%d ",ans[i]);
    }
    
	return 0;
}
