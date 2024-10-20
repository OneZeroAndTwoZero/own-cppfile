#include <bits/stdc++.h>
using namespace std;

int n;
int fa[1000006];
int a[1000006];
stack<int> s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        int idx = -1;
        while(s.size() && a[s.top()] > a[i]){
            idx = s.top();
            s.pop();
        }
        if(idx != -1){
            fa[idx] = i;
        }
        if(s.size()){
            fa[i] = s.top();
        }
        s.push(i);
    }
    for(int i = 1;i <= n;i ++){
        printf("%d%c",fa[i]," \n"[i == n]);
    }

    return 0;
}