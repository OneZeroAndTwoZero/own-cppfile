#include<bits/stdc++.h>
using namespace std;

int x, y;
bool vis[1005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d", &x, &y);
    while (x > 0){
        vis[x] = 1;
        x >>= 1;
    }
    while (y > 0){
        if (vis[y]){
            printf("%d\n", y);
            return 0;
        }
        y >>= 1;
    }

    return 0;
}