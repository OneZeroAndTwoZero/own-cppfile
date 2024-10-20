#include<bits/stdc++.h>
using namespace std;

int n,m,ans = 0;
int l[305] = {0},r[305] = {0};
bool a[305] = {0};

bool check(){
    for(int i = 0;i < m;i ++){
        for(int j = 0;j < m;j ++){
            if(a[i] == 1 && a[j] == 1){
                cout << i << ";;" << j << endl;
                bool t = 0;
                if(l[i] <= l[j] && l[j] <= r[j] && r[j] <= r[i]) t = 1;
                if(l[j] <= l[i] && l[i] <= r[i] && r[i] <= r[j]) t = 1;
                if(r[i] <= l[j] || r[j] <= l[i]) t = 1;
                if(!t) return 0;
                cout << t << ";;;" << endl;
            }
        }
    }
    return 1;
}

void dfs(int k,int sum){
    if(k == m){
        if(sum > ans && check()) ans = sum;
    }
    a[k] = 1;
    dfs(k + 1,sum + 1);
    a[k] = 0;
    dfs(k + 1,sum);
}

int main(){
    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i ++){
        scanf("%d %d",&l[i],&r[i]);
    }
    dfs(0,0);
    printf("%d\n",ans);

    return 0;
}