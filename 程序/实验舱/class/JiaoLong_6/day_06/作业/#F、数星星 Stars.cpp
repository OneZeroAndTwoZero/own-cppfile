#include<bits/stdc++.h>
#define lowbit(x) (x & -x)
using namespace std;

int n,x,y;
int c[32005];
int cnt[15005];

int search(int x){
    int res = 0;
    for(int i = x;i > 0;i -= lowbit(i)){
        res += c[i];
    }
    return res;
}

void update(int pos,int x){
    // 枚举到32001,因为x++了
    for(int i = pos;i <= 32001;i += lowbit(i)){
        c[i] += x;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d %d",&x,&y);
        // x可以为0
        x ++;
        cnt[search(x)] ++;
        update(x,1);
    }
    for(int i = 0;i < n;i ++){
        printf("%d\n",cnt[i]);
    }

	return 0;
}