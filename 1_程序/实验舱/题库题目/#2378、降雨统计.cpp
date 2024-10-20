#include<bits/stdc++.h>
using namespace std;

int n,m;
char a[2005][2005] = {0};
int d[2005][2005] = {0};
long long ans = 0;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        scanf("%s",&a[i]);
        for(int j = 0;j < m;j ++){
            if(a[i][j] == '#'){
                d[i][j + 1] ++;
                d[i][m + 2] --;
            }
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 1;j <= m;j ++){
            d[i][j] += d[i][j - 1];
            ans += d[i][j];
        }
    }
    printf("%lld\n",ans);

	return 0;
}
