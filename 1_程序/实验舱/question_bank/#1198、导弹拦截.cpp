#include<bits/stdc++.h>
using namespace std;

int xpos1,ypos1,xpos2,ypos2;

struct node{
    int xi,yi;
    bool operator < (const node &a) const{
        return pow((xi - xpos1),2) + pow((yi - ypos1),2)
        < pow((a.xi - xpos1),2) + pow((a.yi - ypos1),2);
    }
};

int n,ans = 0x3f3f3f3f;
node a[100005];
int remax[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d %d",&xpos1,&ypos1,&xpos2,&ypos2);
    scanf("%d",&n);
    // cout << n << "[]\n";
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&a[i].xi,&a[i].yi);
    }
    sort(a,a + n);
    for(int i = n - 1;i >= 0;i --){
        int now = pow((a[i].xi - xpos2),2) + pow((a[i].yi - ypos2),2);
        remax[i] = max(remax[i + 1],now);
    }
    for(int i = 0;i < n;i ++){
        int now = pow((a[i].xi - xpos1),2) + pow((a[i].yi - ypos1),2);
        // cout << now << " ;;\n";
        ans = min(ans,now + remax[i + 1]);
    }
    printf("%d\n",ans);

	return 0;
}