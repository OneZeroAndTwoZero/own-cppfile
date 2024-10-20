#include<bits/stdc++.h>
using namespace std;

int n,m,q;
int op,x,y,w;
long long a[5005][5005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&n,&m,&q);
    while(q --){
        scanf("%d",&op);
        if(op == 1){
            scanf("%d %d %d",&x,&y,&w);
            for(int i = 1;i <= n;i ++){
                for(int j = x;j <= y;j ++){
                    a[i][j] += w;
                }
            }
        }else if(op == 2){
            scanf("%d %d",&x,&w);
            for(int i = 1;i <= m;i ++){
                a[x][i] = w;
            }
        }else{
            scanf("%d %d",&x,&y);
            printf("%lld\n",a[x][y]);
        }
    }

	return 0;
}