#include<bits/stdc++.h>
using namespace std;

int m,n;
int cnt_min,cnt_max;
int a[10005];
vector<int> ans;

// 参数f是它父节点的权值
void dfs(int pos,int f){
    if(pos > n) return;
    // 判断父子节点的关系(如果传的不是初始值)
    if(f < a[pos] && f != -0x3f3f3f3f) cnt_min ++;
    if(f > a[pos] && f != -0x3f3f3f3f) cnt_max ++;
    // 递归判断 + 后续遍历
    dfs(pos * 2,a[pos]);
    dfs(pos * 2 + 1,a[pos]);
    ans.push_back(a[pos]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d",&m,&n);
    while(m --){
        for(int i = 1;i <= n;i ++){
            scanf("%d",&a[i]);
        }
        // 清空
        cnt_min = 0,cnt_max = 0;
        while(ans.size()){
            ans.pop_back();
        }
        // -0x3f3f3f3f是初始传入的极值
        dfs(1,-0x3f3f3f3f);
        // 判断并输出答案
        if(!cnt_max) printf("Min Heap\n");
        else if(!cnt_min) printf("Max Heap\n");
        else printf("Not Heap\n");
        for(int i = 0;i < n;i ++){
            printf("%d%c",ans[i]," \n"[i == n - 1]);
        }
    }

	return 0;
}