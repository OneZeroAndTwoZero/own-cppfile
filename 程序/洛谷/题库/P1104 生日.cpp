#include<bits/stdc++.h>
using namespace std;

struct peo{
    string name;
    int y,m,d,id;
    bool operator < (const peo & r) const {
        if(y != r.y) return y < r.y;
        if(m != r.m) return m < r.m;
        if(d != r.d) return d < r.d;
        return id > r.id;
    }
};

int n;
peo a[105];

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    cin >> n;
    for(int i = 0;i < n;i ++){
        cin >> a[i].name >> a[i].y >> a[i].m >> a[i].d;
        a[i].id = i;
    }
    sort(a,a + n);
    for(int i = 0;i < n;i ++){
        cout << a[i].name << endl;
    }

    return 0;
}