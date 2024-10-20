#include<bits/stdc++.h>
using namespace std;

int n,ans = 114514;
int a[15];
vector<int> t[15];

int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

bool check(int k,int x){
    for(int i = 0;i < t[x].size();i ++)
        if(gcd(k,t[x][i]) != 1)
            return 0;
    return 1;
}

void dfs(int k,int num){
    if(k == n){
        ans = min(ans,num);
        return;
    }
    if(num >= ans) return;
    for(int i = 0;i < num;i ++){
        if(check(a[k],i)){
            t[i].push_back(a[k]);
            dfs(k + 1,num);
            t[i].pop_back();
        }
    }
    t[num].push_back(a[k]);
    dfs(k + 1,num + 1);
    t[num].pop_back();
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++)
        scanf("%d",&a[i]);
    dfs(0,0);
    printf("%d\n",ans);

	return 0;
}