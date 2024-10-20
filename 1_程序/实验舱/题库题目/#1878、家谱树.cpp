#include<bits/stdc++.h>
using namespace std;

int n,t;
vector<int> a[105];
int d[105] = {0};

void topsort(){
    queue<int> q;
    for(int i = 1;i <= n;i ++){
        if(!d[i]){
            q.push(i);
        }
    }
    while(q.size()){
        int y = q.front();
        printf("%d ",y);
        q.pop();
        for(auto && i : a[y]){
            d[i] --;
            if(!d[i]){
                q.push(i);
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        while(1){
            scanf("%d",&t);
            if(t){
                a[i].push_back(t);
                d[t] ++;
            }else{
                break;
            }
        }
        sort(a[i].begin(),a[i].end());
    }
    topsort();

	return 0;
}