#include<bits/stdc++.h>
using namespace std;

int n,num1,num2,num3;
int a[100005] = {0};
int b[100005] = {0};
int c[100005] = {0};
int ans[505][505][505] = {0};

int dfs(int n1,int n2,int n3){
    if(ans[n1][n2][n3] != 0) return ans[n1][n2][n3];
    if(n1 > 0)
        ans[n1][n2][n3] = max(ans[n1][n2][n3],
        dfs(n1 - 1,n2,n3) + a[n1 + n2 + n3 - 1]);
    if(n2 > 0)
        ans[n1][n2][n3] = max(ans[n1][n2][n3],
        dfs(n1,n2 - 1,n3) + b[n1 + n2 + n3 - 1]);
    if(n3 > 0)
        ans[n1][n2][n3] = max(ans[n1][n2][n3],
        dfs(n1,n2,n3 - 1) + c[n1 + n2 + n3 - 1]);
    return ans[n1][n2][n3];
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d %d %d",&n,&num1,&num2,&num3);
    for(int i = 0;i < n;i ++)
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    printf("%d\n",dfs(num1,num2,num3));

	return 0;
}