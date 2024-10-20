#include<bits/stdc++.h>
using namespace std;

int l[3];
int a[100005];
map<int,int> f;
vector<int> ans;

void operate(int n){
    unordered_map<int,int> s;
    for(int i = 0;i < n;i ++){
        s[a[i]] = 1;
    }
    unordered_map<int,int> :: iterator it;
    for(it = s.begin();it != s.end();it ++){
        if(!it -> second) continue;
        f[it -> first] ++;
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

    scanf("%d %d %d",&l[0],&l[1],&l[2]);
    for(int i = 0;i < 3;i ++){
        for(int j = 0;j < l[i];j ++){
            scanf("%d",&a[j]);
        }
        operate(l[i]);
    }
    map<int,int> :: iterator it;
    for(it = f.begin();it != f.end();it ++){
        if(it -> second < 2) continue;
        ans.push_back(it -> first);
    }
    for(int i = 0;i < ans.size();i ++){
        printf("%d%c",ans[i]," \n"[i == ans.size() - 1]);
    }

    return 0;
}