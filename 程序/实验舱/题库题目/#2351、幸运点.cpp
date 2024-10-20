#include<bits/stdc++.h>
using namespace std;

struct node{
    int pos,idx;
    bool operator < (const node &a){
        if(pos != a.pos) return pos < a.pos;
        // 坐标相同优先右端点,防止算多
        return idx < a.idx;
    }
};

int n,cnt,ans;
node a[200005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&a[2 * i].pos,&a[2 * i + 1].pos);
        a[2 * i + 1].pos ++,a[2 * i].idx = 1,a[2 * i + 1].idx = -1;
    }
    sort(a,a + 2 * n);
    for(int i = 0;i < 2 * n;i ++){
        cnt += a[i].idx;
        ans = max(ans,cnt);
    }
    printf("%d\n",ans);

	return 0;
}