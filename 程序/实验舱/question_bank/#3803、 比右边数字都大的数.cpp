#include<bits/stdc++.h>
using namespace std;

int t,maxn = -0x3f3f3f3f;
vector<int> num;
vector<int> a;

void putout(){
    printf("[");
    int len = a.size();
    for(int i = 0;i < len;i ++){
        if(i) printf(", ");
        printf("%d",a[i]);
    }
    printf("]");
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    while(~scanf("%d",&t)){
        num.push_back(t);
    }
    int len = num.size();
    maxn = num[len - 1];
    for(int i = len - 2;i >= 0;i --){
        if(num[i] <= maxn) continue;
        a.push_back(num[i]);
        maxn = num[i];
    }
    reverse(a.begin(),a.end());
    putout();

    return 0;
}
