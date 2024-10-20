#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
int d[100005];
int s[100005];
vector<int> a;

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
        scanf("%d",&d[i]);
    }
    for(int i = 0;i < n;i ++){
        scanf("%d",&s[i]);
        a.push_back({(d[i] + s[i] - 1) / s[i]});
    }
    sort(a.begin(),a.end());
    for(int i = 0;i < n;i ++){
        if(a[i] < i + 1){
            printf("%d\n",i);
            return 0;
        }
    }
    printf("%d\n",n);

    return 0;
}