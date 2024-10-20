#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n,ans = 0;
int num1,num2;
int a[15][15];
int now[15];
int cntn[15][100005];
int cnt[100005];

void add(int idx,int num){
    int res = 0;
    for(int i = 0;i < 5;i ++){
        res = res * 10 + now[i];
    }
    cntn[idx][res] = 1;
}

void operate(int idx){
    int cur;
    for(int i = 0;i < 5;i ++){
        now[i] = a[idx][i];
    }
    for(cur = -9;cur <= 9;cur ++){
        for(int pos = 0;pos < 5;pos ++){
            now[pos] = (now[pos] + cur + 10) % 10;
            add(idx,1);
            now[pos] = a[idx][pos];
        }
    }
    for(cur = -9;cur <= 9;cur ++){
        for(int pos = 0;pos < 4;pos ++){
            now[pos] = (now[pos] + cur + 10) % 10;
            now[pos + 1] = (now[pos + 1] + cur + 10) % 10;
            add(idx,2);
            now[pos] = a[idx][pos];
            now[pos + 1] = a[idx][pos + 1];
        }
    } 
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
        int t = 0;
        for(int j = 0;j < 5;j ++){
            scanf("%d",&a[i][j]);
            t = t * 10 + a[i][j];
        }
        operate(i);
        cntn[i][t] = 0;
    }
    for(int i = 0;i < n;i ++){
        for(int j = 0;j <= 100000;j ++){
            cnt[j] += cntn[i][j];
        }
    }
    for(int i = 0;i <= 100000;i ++){
        if(cnt[i] == n){
            ans ++;
        }
    }
    printf("%d\n",ans);
    
    return 0;
}
