#include<bits/stdc++.h>
using namespace std;

int n,r;
int ans[25] = {0};

void dfs(int k,int num){
    if(k == n + 1){
        if(num == r){
            for(int i = 0;i <= n;i ++){
                if(ans[i]) printf("%3d",i);
            }
            printf("\n");
        }
        return;
    }
    ans[k] = 1;
    dfs(k + 1,num + 1);
    ans[k] = 0;
    dfs(k + 1,num);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d",&n,&r);
    dfs(1,0);

    return 0;
}