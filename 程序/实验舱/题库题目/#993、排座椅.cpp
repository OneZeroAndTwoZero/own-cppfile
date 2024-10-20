#include<bits/stdc++.h>
using namespace std;

struct node{
    int idx,val;
    bool operator < (const node &a) const{
        return val > a.val;
    }
};

int n,m,k,l,d;
int sx,sy,ex,ey;
// w横向,h纵向
node h[1005],w[1005];
vector<int> ans_h,ans_w;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d %d %d",&n,&m,&k,&l,&d);
    for(int i = 1;i <= max(n,m);i ++)
        w[i].idx = h[i].idx = i;
    for(int i = 0;i < d;i ++){
        scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
        if(sx == ex) h[min(sy,ey)].val ++;
        else w[min(sx,ex)].val ++;
    }
    sort(w,w + n + 1);
    sort(h,h + m + 1);
    for(int i = 0;i < k;i ++) ans_w.push_back(w[i].idx);
    for(int i = 0;i < l;i ++) ans_h.push_back(h[i].idx);
    sort(ans_w.begin(),ans_w.end());
    sort(ans_h.begin(),ans_h.end());
    for(int i = 0;i < k;i ++)
        printf("%d%c",ans_w[i]," \n"[i == k - 1]);
    for(int i = 0;i < l;i ++)
        printf("%d%c",ans_h[i]," \n"[i == l - 1]);

	return 0;
}