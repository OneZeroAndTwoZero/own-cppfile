#include<bits/stdc++.h>
using namespace std;

int n,m,l,r,pos = 0;
int p[200005] = {0};
bool vis[1000005] = {0};
int num[1000005] = {0};

void olashai(){
    for(int i = 2;i <= m;i ++){
        if(!vis[i]) p[pos ++] = i,num[i] ++;
        for(int j = 0;j < pos && i * p[j] <= m;j ++){
            vis[i * p[j]] = 1;
            if(i % p[j] == 0) break;
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    olashai();
    for(int i = 1;i <= m;i ++) num[i] += num[i - 1];
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&l,&r);
        if(l < 1 || r > m) printf("Crossing the line\n");
        else printf("%d\n",num[r] - num[l - 1]);
    }

	return 0;
}