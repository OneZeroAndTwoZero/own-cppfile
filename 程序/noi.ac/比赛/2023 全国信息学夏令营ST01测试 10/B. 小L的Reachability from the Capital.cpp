#include<bits/stdc++.h>
using namespace std;

int n,m,cnt = 0;
int u,v;
int d[300005] = {0};

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&m);
    while(m --){
        scanf("%d %d",&u,&v);
        d[v] ++;
    }
    for(int i = 2;i <= n;i ++){
        if(d[i] == 0){
            cnt ++;
        }
    }
    printf("%d\n",cnt);

	return 0;
}