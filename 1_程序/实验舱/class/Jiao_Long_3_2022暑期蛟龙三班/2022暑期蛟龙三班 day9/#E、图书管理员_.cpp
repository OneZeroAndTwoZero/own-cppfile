#include<bits/stdc++.h>
using namespace std;

int n,q,t;
unordered_map<int,int> f,idx;

void cz(int a,int pos){
    int res = 0,p = 1;
    while(a){
        res += (a % 10) * p;
        p *= 10,a /= 10;
        if(!f[res]) idx[res] = pos;
        else if(idx[res] > pos) idx[res] = pos;
        f[res] = 1;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&q);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        cz(t,t);
    }
    while(q --){
        scanf("%d %d",&n,&t);
        if(f[t]) printf("%d\n",idx[t]);
        else printf("-1\n");
    }

	return 0;
}