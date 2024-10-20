#include<bits/stdc++.h>
using namespace std;

struct node{
    string name;
    bool ok;
    int l;
    bool operator < (const node & a) const{
        if(ok != a.ok) return ok > a.ok;
        return l < a.l;
    }
};
int n,a,b,c;
node f[5];

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d %d %d %d",&n,&a,&b,&c);
    f[0].name = "library",f[1].name = "comprehensive",f[2].name = "art";
    f[0].l = a,f[1].l = b,f[2].l = c;
    f[0].ok = 3 >= n,f[1].ok = 5 >= n,f[2].ok = 9 >= n;
    sort(f,f + 3);
    cout << f[0].name << endl;

    return 0;
}