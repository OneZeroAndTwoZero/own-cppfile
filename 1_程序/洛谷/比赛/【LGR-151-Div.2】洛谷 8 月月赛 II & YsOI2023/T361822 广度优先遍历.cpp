#include<bits/stdc++.h>
using namespace std;

struct node{
    int ui,vi;
};

int n,m;
int u,v,f;
vector<node> ans;
unordered_map<int,int> fin[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i ++){
        scanf("%d %d",&u,&v);
        if(u > v) swap(u,v);
        if(m == n - 1) 
            printf("%d %d\n",u,v);
        fin[u][v] += 1;
    }
    if(m == n - 1) return 0;
    scanf("%d",&f);
    for(int i = 2;i <= n;i ++){
        scanf("%d",&f);
        int ti = i;
        if(f > ti) swap(f,ti);
        ans.push_back({f,ti});
        fin[f][ti] -= 1;
    }
    unordered_map<int,int> :: iterator it;
    for(int k = 1;k <= n;k ++){
        for(it = fin[k].begin();it != fin[k].end();it ++){
            while(it->second > 0){
                ans.push_back({k,it->first});
                it->second --;
            }
        }
    }
    for(int i = 0;i < m;i ++){
        printf("%d %d\n",ans[i].ui,ans[i].vi);
    }

	return 0;
}