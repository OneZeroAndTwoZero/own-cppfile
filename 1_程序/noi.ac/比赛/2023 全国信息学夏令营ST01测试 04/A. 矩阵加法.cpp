#include<bits/stdc++.h>
using namespace std;

int n,m,t;
int ans[1005][1005] = {0};

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            scanf("%d",&ans[i][j]);
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            scanf("%d",&t);
            ans[i][j] += t;
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }

	return 0;
}
