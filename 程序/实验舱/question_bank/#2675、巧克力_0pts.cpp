#include<bits/stdc++.h>
using namespace std;

int n,m,k,t;
int op,x,y;
vector<int> a[105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&k);
        while(k --){
            scanf("%d",&t);
            a[i].push_back(t);
        }
    }
    while(m --){
        scanf("%d %d",&op,&x);
        if(op == 1){
            scanf("%d",&y);
            for(int i = 0;i < a[x].size();i ++){
                a[y].push_back(a[x][i] - 1);
            }
            a[x].clear();
        }else if(op == 2){
            scanf("%d",&y);
            reverse(a[x].begin(),a[x].end());
            for(int i = a[x].size() - 1;i >= 0;i --){
                a[y].push_back(a[x][i] - 1);
            }
            a[x].clear();
        }else{
            for(int i = 0;i < a[x].size();i ++){
                a[x][i] --;
            }
            reverse(a[x].begin(),a[x].end());
        }
    }
    for(int i = 1;i <= n;i ++){
        int cnt = 0;
        for(auto && k : a[i]){
            if(k > 0) cnt ++;
        }
        printf("%d",cnt);
        for(auto && k : a[i]){
            if(k > 0) printf(" %d",k);
        }
        printf("\n");
    }

    return 0;
}