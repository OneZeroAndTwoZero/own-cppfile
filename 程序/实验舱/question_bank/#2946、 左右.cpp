#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

struct node{
    int pre,dat,nxt;
};

int n,t;
string s;
node a[500005];
vector<int> ans;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    a[0].pre = -1,a[0].dat = 0,a[0].nxt = -1;
    cin >> n >> s;
    for(int i = 1;i <= n;i++){
        if(s[i - 1] == 'L'){
            a[i].dat = i;
            a[i].nxt = i - 1,a[i].pre = a[i - 1].pre;
            if(a[i - 1].pre != -1)
                a[a[i - 1].pre].nxt = i;
            a[i - 1].pre = i;
        }else{
            a[i].dat = i;
            a[i].pre = i - 1,a[i].nxt = a[i - 1].nxt;
            if(a[i - 1].nxt != -1)
                a[a[i - 1].nxt].pre = i;
            a[i - 1].nxt = i;
        }
    }
    for(int i = 0;i <= n;i++){
        if(a[i].pre == -1) t = i;
    }
    while(t != -1){
        ans.push_back(t);
        t = a[t].nxt;
    }
    for(int i = 0;i <= n;i++){
        cout << ans[i] << " \n"[i == n];
    }

    return 0;
}