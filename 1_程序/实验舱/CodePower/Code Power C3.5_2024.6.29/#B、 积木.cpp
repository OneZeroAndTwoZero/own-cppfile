#include<bits/stdc++.h>
using namespace std;

int n, m, op, curl, curr, curx;
vector<int> pos, stpos, l, r, x, stop;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf ("%d %d", &n, &m);
    for (int i = 0; i < m; i ++){
        scanf("%d", &op);
        if (op == 3){
            scanf("%d", &curl);
            pos.push_back(curl);
            stpos.push_back(i); // 当前步数
        }else{
            scanf("%d %d %d", &curl, &curr, &curx);
            l.push_back(curl), r.push_back(curr);
            if (op == 1) x.push_back(curx);
            else x.push_back(-curx);
            stop.push_back(i); // 当前步数
        }
    }
    for (int i = 0; i < pos.size(); i ++){
        int res = pos[i];
        for (int j = 0; j < l.size(); j ++){
            if (l[j] > pos[i] || r[j] < pos[i] || stpos[i] < stop[j]) continue;
            res = max(0, res + x[j]);
        }
        printf("%d\n", res);
    }

    return 0;
}