#include<bits/stdc++.h>
using namespace std;

struct node{
    int xi,yi;
    bool operator < (const node &a) const{
        if(xi != a.xi) return xi < a.xi;
        return yi < a.yi;
    }
};

int n;
node a[100005];

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
        scanf("%d %d",&a[i].xi,&a[i].yi);
    }
    sort(a,a + n);
    for(int i = 0;i < n;i ++){
        printf("%d %d\n",a[i].xi,a[i].yi);
    }

	return 0;
}