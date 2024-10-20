#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
vector<int> num;

int getsum(int x){
    int res = 0;
    while(x){
        res += x % 10;
        x /= 10;
    }
    return res;
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
    for(int i = 0;i <= min(n,100);i ++){
        if(i != getsum(n - i)) continue;
        ans ++;
        num.push_back(n - i);
    }
    printf("%d\n",ans);
    sort(num.begin(),num.end());
    for(int i = 0;i < num.size();i ++){
        printf("%d%c",num[i]," \n"[i == num.size() - 1]);
    }

    return 0;
}