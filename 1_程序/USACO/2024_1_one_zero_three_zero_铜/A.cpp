#include<bits/stdc++.h>
using namespace std;

int T,n,cnt;
int a[200005];
bool vis[200005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%d",&n);
        cnt = 0;
        for(int i = 1;i <= n;i ++){
            scanf("%d",&a[i]);
            vis[i] = 0;
        }
        a[n + 1] = a[n + 2] = -1;
        for(int i = 1;i <= n;i ++){
            if(a[i + 1] == a[i] || a[i + 2] == a[i]){
                vis[a[i]] = 1;
            }
        }
        for(int i = 1;i <= n;i ++){
            if(!vis[i]) continue;
            if(cnt) printf(" ");
            cnt ++;
            printf("%d",i);
        }
        if(cnt == 0) printf("-1");
        printf("\n");
    }

    return 0;
}