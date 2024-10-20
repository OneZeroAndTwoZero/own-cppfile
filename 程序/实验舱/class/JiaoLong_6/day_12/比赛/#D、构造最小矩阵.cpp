#include<bits/stdc++.h>
using namespace std;

int n;
int a[1005][1005];
bool vis[1005];

void operate(int k){
    for(int i = 0;i < n;i ++){
        swap(a[i][k],a[k][i]);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0;i < n;i ++){
        
        for(int j = 0;j < n;j ++){
            // printf("\n");
            // cout << i << " " << j << " " << vis[i] << " " << vis[j] << "\n";
            if(vis[i] && vis[j]) continue;
            if(i == j) continue;
            if(a[i][j] < a[j][i]){
                // cout << i << " " << j << "\n";
                vis[i] = 1,vis[j] = 1;
            }
            if(a[i][j] <= a[j][i]) continue;
            if(vis[i] == 0){
                operate(i);
                vis[i] = 1,vis[j] = 1;
                // printf("%d;;\n",i);
            }else if(vis[j] == 0){
                operate(j);
                vis[i] = 1,vis[j] = 1;
                // printf("%d;;\n",j);
            }
            // for(int i = 0;i < n;i ++){
            //     for(int j = 0;j < n;j ++){
            //         printf("%d%c",a[i][j]," \n"[j == n - 1]);
            //     }
            // }
            // printf("\n");
        }
        
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < n;j ++){
            printf("%d%c",a[i][j]," \n"[j == n - 1]);
        }
    }

    return 0;
}