#include<bits/stdc++.h>
using namespace std;

int n;
char a[105][105];
vector<int> ans;

bool check(int x,int y){
    // printf("%d %d\n",x,y);
    if(x == 0 || y == 0) return 1;
    if(a[x - 1][y] == '0') return check(x - 1,y);
    if(x == n || a[x][y - 1] == '0') return check(x,y - 1);
    return 0;
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
    for(int i = 0;i < n;i ++){
        scanf("%s",a[i]);
    }
    for(int i = 0;i < n;i ++){
        // printf("%d;;;;;;;\n",i + 1);
        if(check(n,i)) continue;
        ans.push_back(i + 1);
    }
    for(int i = 0;i < ans.size();i ++){
        printf("%d%c",ans[i]," \n"[i == ans.size() - 1]);
    }

	return 0;
}