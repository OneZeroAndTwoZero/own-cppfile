#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[2005][2005];
int cnt[15];
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
long long ans = 0;

int main(){
    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            scanf("%d",&a[i][j]);
            cnt[a[i][j]] ++;
        }
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            // cout << i << " " << j << endl;
            // cout << ans << "[][]\n";
            ans += cnt[a[i][j]] - 1;
            for(int k = 0;k < 4;k ++){
                int tx = i + dir[k][0],ty = j + dir[k][1];
                if(tx >= 0 && ty >= 0 && tx < n && ty < m){
                    if(a[tx][ty] == a[i][j]){
                        ans --;
                    }
                }
            }
            // cout << ans << ";;;\n";
        }
    }
    printf("%lld\n",ans);

	return 0;
}