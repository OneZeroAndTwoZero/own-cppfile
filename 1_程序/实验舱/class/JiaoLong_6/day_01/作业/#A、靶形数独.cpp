#include<bits/stdc++.h>
using namespace std;

int cnt[15];

struct node{
    int xi,yi,val;
    int box;
    bool operator < (const node &a) const{
        return cnt[xi] > cnt[a.xi];
    }
};

bool ok[3][15][15];
int t,now = 0,ans = 0,pos = 0;
node a[105];

int suan_val(int x,int y){
    return min({x + 1,y + 1,9 - x,9 - y}) + 5;
}

int suan_box(int x,int y){
    return (x / 3) * 3 + (y / 3);
}

void dfs(int p,int sum){
    // cout << p << " " << sum << "\n";
    if(p == pos){
        ans = max(ans,sum);
        return;
    }
    for(int i = 9;i >= 1;i --){
        if(ok[0][a[p].xi][i] || ok[1][a[p].yi][i] || ok[2][a[p].box][i]) continue;
        ok[0][a[p].xi][i] = ok[1][a[p].yi][i] = ok[2][a[p].box][i] = 1;
        dfs(p + 1,sum + a[p].val * i);
        ok[0][a[p].xi][i] = ok[1][a[p].yi][i] = ok[2][a[p].box][i] = 0;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    for(int i = 0;i < 9;i ++){
        for(int j = 0;j < 9;j ++){
            scanf("%d",&t);
            if(t){
                now += suan_val(i,j) * t;
                cnt[i] ++;
                ok[0][i][t] = ok[1][j][t] = ok[2][suan_box(i,j)][t] = 1;
                continue;
            }
            a[pos].xi = i,a[pos].yi = j;
            a[pos].val = suan_val(i,j);
            a[pos].box = suan_box(i,j);
            pos ++;
        }
    }
    sort(a,a + pos);
    // for(int i = 0;i < pos;i ++){
    //     cout << i << " " << a[i].xi << " " << a[i].yi << " " << a[i].box << "\n";
    // }
    dfs(0,0);
    if(ans) printf("%d\n",now + ans);
    else printf("-1\n");

	return 0;
}