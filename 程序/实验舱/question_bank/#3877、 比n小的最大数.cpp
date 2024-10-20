#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

long long x;
vector<int> a;

void dfs(int n){
    // printf("%d;;;\n",n);
    if(n < 0){
        printf("-1\n");
        return;
    }
    bool temp1 = 1;
    for(int i = n + 1;i < a.size();i ++){
        if(a[i - 1] > a[i]) temp1 = 0;
    }
    if(temp1){
        dfs(n - 1);
        return;
    }
    int minn = -1000000,minpos = -1;
    for(int i = n + 1;i < a.size();i ++){
        if(a[i] >= a[n]) continue;
        if(a[i] < minn) continue;
        minn = a[i];
        minpos = i;
    }
    // printf("%d %d[]\n",minn,minpos);
    swap(a[n],a[minpos]);
    sort(a.begin() + n + 1,a.end(),greater<int>());
    for(int i = 0;i < a.size();i ++){
        printf("%d",a[i]);
    }
    printf("\n");
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld",&x);
    while(x){
        a.push_back(x % 10);
        x /= 10;
    }
    if(!a.size()) a.push_back(0);
    reverse(a.begin(),a.end());
    // for(auto && i : a) cout << i;
    dfs(a.size() - 2);

    return 0;
}