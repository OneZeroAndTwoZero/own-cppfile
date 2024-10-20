#include<bits/stdc++.h>
using namespace std;

int n,t,max_ = -1,ans = -1;
int v[100005],a[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&n,&t);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&v[i],&a[i]);
        if((t - a[i]) * v[i] > max_){
            max_ = (t - a[i]) * v[i];
            ans = i + 1;
        }
    }
    printf("%d\n",ans);

	return 0;
}