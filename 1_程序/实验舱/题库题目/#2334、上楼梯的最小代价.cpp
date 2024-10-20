#include<bits/stdc++.h>
using namespace std;

int n;
int c[10005] = {0};
int ans[10005] = {0};

int cz(int l){
    if(l < 0) return 0x3f3f3f3f;
    if(ans[l] != -1) return ans[l];
    ans[l] = min(cz(l - 1),cz(l - 2)) + c[l];
    return ans[l];
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&c[i]);
        ans[i] = -1;
    }
    ans[n] = -1;
    ans[0] = c[0],ans[1] = c[1];
    printf("%d\n",cz(n));

	return 0;
}
