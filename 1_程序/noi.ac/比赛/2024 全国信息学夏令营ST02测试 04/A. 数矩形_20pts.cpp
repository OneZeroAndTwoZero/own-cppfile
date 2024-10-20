#include<bits/stdc++.h>
#pragma GCC optimize(2)
#define turn(i, j) ((1LL * (a[i].x) * 1000006 + (a[j].y)))
using namespace std;

struct node{
    int x, y;
};

int n;
long long ans = 0;
node a[1000006];
unordered_map<int, int> fx, fy;
unordered_map<long long, int> f;

void operate(){
    map<int, int> mpx, mpy;
    mpx.clear(), mpy.clear();
    for (int i = 0; i < n; i ++){
        mpx[a[i].x] = 1;
        mpy[a[i].y] = 1;
    }
    int cidx = 0, cidy = 0;
    for (auto && i : mpx){
        fx[i.first] = ++cidx;
    }
    for (auto && i : mpy){
        fy[i.first] = ++cidy;
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

    scanf("%d", &n);
    for (int i = 0; i < n; i ++){
        scanf("%d %d", &a[i].x, &a[i].y);
    }
    operate();
    for (int i = 0; i < n; i ++){
        a[i].x = fx[a[i].x];
        a[i].y = fy[a[i].y];
        // cout << a[i].x << " " << a[i].y << "\n";
    }
    if (n <= 0){
        for (int i = 0; i < n; i ++){
            f[turn(i, i)] = 1;
        }
        for (int i = 0; i < n; i ++){
            for (int j = i + 1; j < n; j ++){
                if (a[i].x == a[j].x || a[i].y == a[j].y) continue;
                if (!f[turn(i, j)] || !f[turn(j, i)]) continue;
                // cout << i << " " << j << "\n";
                ans ++;
            }
        }
        printf("%lld\n", ans >> 1);
    }else{
        vector<int> GenShin[105];
        for (int i = 0; i < n; i ++){
            GenShin[a[i].x].push_back(a[i].y);
        }
        for (int i = 0; i <= 25; i ++){
            for (int j = 0; j <= 25; j ++){
                int l = 0, r = 0;
                int cnt = 0;
                while (l < GenShin[i].size() && r < GenShin[j].size()){
                    if (GenShin[i][l] == GenShin[j][r]){
                        cnt ++;
                        l ++, r ++;
                    }
                    if (GenShin[i][l] < GenShin[j][r]) l ++;
                    else r ++;
                }
                ans += 1LL * cnt * (cnt - 1);
            }
        }
        printf("%lld\n", ans >> 1);
    }

    return 0;
}