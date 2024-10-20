#include<bits/stdc++.h>
using namespace std;

int n,t;
unordered_map<int,int> f;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    while(n --){
        scanf("%d",&t);
        f[t] ++;
    }
    printf("%d\n",f.size());

    return 0;
}