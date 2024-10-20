#include<bits/stdc++.h>
using namespace std;

bool a[100005] = {0};
int p[30005] = {0};
int n,pos = 0;
set<int> ans;

void olshai(){
	for(int i = 2;i <= n;i++){
		if(!a[i]){
		    p[pos ++] = i;
		}
		for(int j = 0;j < pos && p[j] <= n / i;j++){
		 	a[i * p[j]] = 1;
		 	if(i % p[j] == 0) break;
		}
	}
}

void dfs(int k,int num){
    if(k == pos || p[k] > n / num){
        if(a[num]) ans.insert(num);
        return;
    }
    dfs(k + 1,num);
    dfs(k + 1,num * p[k]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    olshai();
    dfs(0,1);
    while(ans.size()){
        printf("%d ",*ans.begin());
        ans.erase(ans.begin());
    }

    return 0;
}