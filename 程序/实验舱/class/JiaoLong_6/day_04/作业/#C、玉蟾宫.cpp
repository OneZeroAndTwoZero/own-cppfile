#include<bits/stdc++.h>
using namespace std;

int n,m,ans;
char a[1005][1005];
int u[1005][1005];
int f0[1005],fn[1005];
stack<int> s;

void __init(){
    while(s.size()) s.pop();
    for(int i = 0;i <= m + 1;i ++){
        f0[i] = fn[i] = 0;
    }
}

int getnum(int idx){
    int res = 0;
    __init();
    for(int i = 1;i <= m;i ++){
        while(s.size() && u[idx][i] < u[idx][s.top()]){
            f0[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while(s.size()){
        f0[s.top()] = m + 1;
        s.pop();
    }
    for(int i = m;i >= 1;i --){
        while(s.size() && u[idx][i] < u[idx][s.top()]){
            fn[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    for(int i = 1;i <= m;i ++){
        int w = f0[i] - fn[i] - 1;
        // cout << idx << " " << i << " " << w << " " << u[idx][i] << "[]\n";
        res = max(res,w * u[idx][i]);
    }

    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d ",&n,&m);
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            scanf("%c ",&a[i][j]);
            if(a[i][j] == 'F'){
                u[i][j] = u[i - 1][j] + 1;
            }
            // cout << u[i][j] << " ";
        }
        // cout << "\n";
    }
    for(int i = 1;i <= n;i ++){
        ans = max(ans,getnum(i));
    }
    printf("%d\n",3 * ans);

	return 0;
}