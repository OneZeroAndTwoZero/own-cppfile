#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
string a[25],s;
int ok[25] = {0};

void dfs(int k,int sum,string s){
    ans = max(ans,sum);
    if(k == n) return;
    for(int i = 0;i < n;i ++){
        if(ok[i] < 2){
            if(a[i].find(s) == a[i].npos){
                int k = 0;
                for(k = 0;k < s.size();k ++){

                }
            }
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    cin >> n;
    for(int i = 0;i < n;i ++){
        cin >> a[i];
    }
    cin >> s;

    return 0;
}