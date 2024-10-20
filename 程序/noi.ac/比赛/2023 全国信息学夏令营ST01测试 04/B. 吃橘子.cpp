#include<bits/stdc++.h>
using namespace std;

int n,ans = 0x3f3f3f3f;
int a[105] = {0};
int q[105] = {0};

void dfs(int k){
    if(k == n){
        int num1 = 0,num2 = 0;
        for(int i = 0;i < n;i ++){
            if(q[i] == 0){
                num1 += a[i];
            }else{
                num2 += a[i];
            }
        }
        ans = min(abs(num1 - num2),ans);
        return;
    }
    q[k] = 1;
    dfs(k + 1);
    q[k] = 0;
    dfs(k + 1);
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    dfs(0);
    printf("%d\n",ans);

	return 0;
}