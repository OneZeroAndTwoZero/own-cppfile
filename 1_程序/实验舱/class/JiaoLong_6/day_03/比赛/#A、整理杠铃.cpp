#include<bits/stdc++.h>
using namespace std;

int n;
int a[105];
int t[105];
int ans[105];

bool check(){
    for(int i = 0;i < n;i ++){
        if(t[i] != ans[i]){
            // cout << i << " " << t[i] << " " << ans[i] << "\n";
            return 0;
        }
    }
    return 1;
}

void swap_(int l,int r){
    // for(int i = 0;i < n;i ++){
    //     cout << t[i] << " ";
    // }
    // cout << "\n";
    reverse(t + l,t + r + 1);
    // for(int i = 0;i < n;i ++){
    //     cout << t[i] << " ";
    // }
    // cout << "\n";
}

bool dfs(int k,int x){
    if(k > x) return 0;
    // cout << k << " " << x << ";;\n";
    if(k == x){
        if(check()){
            return 1;
        }
        return 0;
    }
    for(int i = 1;i < n;i ++){
        swap_(0,i);
        if(dfs(k + 1,x)){
            return 1;
        }
        swap_(0,i);
    }
    return 0;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        ans[i] = t[i] = a[i];
    }
    sort(ans,ans + n);
    if(n < 10){
        for(int i = 0;;i ++){
            if(dfs(0,i)){
                printf("%d\n",i);
                return 0;
            }
        }
    }else{
        printf("%d\n",n);
    }

	return 0;
}