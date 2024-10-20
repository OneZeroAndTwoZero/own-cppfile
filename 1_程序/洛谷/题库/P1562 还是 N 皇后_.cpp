#include<bits/stdc++.h>
using namespace std;

#define lowbit(x) x&-x

int n,mask,ans = 0;
int st[105];
char ch[105];

void dfs(int r,int s1,int s2,int s3){
    if(r == n){
        ans ++;
        return;
    }
    int t = mask & ~(s1 | s2 | s3 | st[r]);
    while(t){
        int x = lowbit(t);
        t -= x;
        dfs(r + 1,s1 | x,(s2 | x) >> 1,(s3 | x) << 1);
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    mask = (1 << n) - 1;
    for(int i = 0;i < n;i ++){
        scanf("%s",ch);
        for(int j = 0;j < n;j ++){
            if(ch[j] == '.'){
                st[i] += 1 << (n - j - 1);
            }
        }
    }
    dfs(0,0,0,0);
    printf("%d\n",ans);

	return 0;
}