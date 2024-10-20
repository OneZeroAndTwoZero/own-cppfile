#include<bits/stdc++.h>
using namespace std;

struct node{
    int li,ri,xi;
    bool operator < (const node &a) const{
        return ri < a.ri;
    }
};

int n,m;
node a[200006];
int ans[200005];
int c[200005];
int jump[200005];

int lowbit(int x){
    return (x & -x);
}

void update(int x,int num){
    for(int i = x;i <= n;i += lowbit(i)){
        c[i] += num;
    }
}

int query(int x){
    int res = 0;
    for(int i = x;i;i -= lowbit(i)){
        res += c[i];
    }
    return res;
}

int search(int l,int r){
    return query(r) - query(l - 1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        jump[i] = i - 1;
    }
    for(int i = 0;i < m;i ++){
        scanf("%d %d %d",&a[i].li,&a[i].ri,&a[i].xi);
    }
    sort(a,a + m);
    for(int i = 0;i < m;i ++){
        // cout << a[i].li << " " << a[i].ri << " " << a[i].xi << ";;\n";
        int num = a[i].xi - search(a[i].li,a[i].ri);
        // cout << num << ";;\n";
        if(num <= 0) continue;
        int pos = a[i].ri;
        while(num){
            if(ans[pos] == 0){
                update(pos,1);
                num --;
                ans[pos] = 1;
            }
            pos = jump[pos];
        }
        jump[a[i].ri] = pos;
    }
    // for(int i = 1;i <= n;i ++){
    //     cout << jump[i] << "[]\n";
    // }
    for(int i = 1;i <= n;i ++){
        printf("%d%c",ans[i]," \n"[i == n]);
    }

    return 0;
}