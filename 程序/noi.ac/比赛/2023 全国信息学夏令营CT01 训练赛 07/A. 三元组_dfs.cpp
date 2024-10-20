#include<bits/stdc++.h>
using namespace std;

int n,num1,num2,num3;
int a[100005] = {0};
int b[100005] = {0};
int c[100005] = {0};
int t[1005] = {0};
int ans = 0;

void dfs(int k,int sum,int n1,int n2,int n3){
    if(k == n){
        if(n1 == num1 && n2 == num2 && n3 == num3)
            ans = max(ans,sum);
        return;
    }
    t[k] = 1;
    dfs(k + 1,sum + a[k],n1 + 1,n2,n3);
    t[k] = 2;
    dfs(k + 1,sum + b[k],n1,n2 + 1,n3);
    t[k] = 3;
    dfs(k + 1,sum + c[k],n1,n2,n3 + 1);
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d %d %d",&n,&num1,&num2,&num3);
    for(int i = 0;i < n;i ++)
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    dfs(0,0,0,0,0);
    printf("%d\n",ans);

	return 0;
}