#include<bits/stdc++.h>
using namespace std;

int t;
vector<int> num;
vector<int> a;
unordered_map<int,int> vis;

void putout(){
    printf("[");
    int len = a.size();
    for(int i = 0;i < len;i ++){
        if(i) printf(", ");
        printf("%d",a[i]);
    }
    printf("]");
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    while(~scanf("%d",&t)){
        num.push_back(t);
        vis[t] ++;
    }
    int len = num.size();
    for(int i = 0;i < len;i ++){
        if(vis[num[i]] > 1) continue;
        a.push_back(num[i]);
    }
    putout();

    return 0;
}
