#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

struct node{
    int val,id;
    bool operator < (const node &a) const{
        return val < a.val;
    }
};

int r,c,cid = 0;
string s;
node a[105];
int f[105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> r >> c;
    for(int i = 0;i < r;i ++){
        cin >> s;
        for(int j = s.size() - 1;j >= 0;j --){
            if(!isdigit(s[j])) continue;
            a[i].val = s.size() - j;
            a[i].id = s[j] - '0';
            break;
        }
        if(!a[i].id) a[i].val = 1919810;
    }
    sort(a,a + r);
    for(int i = 0;i < 9;i ++){
        if(i == 0 || a[i].val > a[i - 1].val) cid ++;
        f[a[i].id] = cid;
    }
    for(int i = 1;i <= 9;i ++){
        printf("%d\n",f[i]);
    }

    return 0;
}