#include<bits/stdc++.h>
using namespace std;

struct dian{
    string data;
    int l = -1,r = -1;
};

string s;
dian a[100005];
int n,pos = 0;

int build(int L,int R){
    if(L > R) return -1;
    int root = ++ pos;
    if(L == R){
        a[root].data = s[L];
        a[root].l = -1,a[root].r = -1;
        return root;
    }
    if(s.find("I",L) == -1 || s.find("I",L) > R) a[root].data = "B";
    else if(s.find("B",L) == -1 || s.find("B",L) > R) a[root].data = "I";
    else a[root].data = "F";
    a[root].l = build(L,(L + R) / 2);
    a[root].r = build((L + R) / 2 + 1,R);
    return root;
}

void hou(int u){
    if(u == -1) return;
    hou(a[u].l);
    hou(a[u].r);
    cout << a[u].data;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    cin >> n;
    cin >> s;
    s = "0" + s;
    build(1,s.size() - 1);
    hou(1);

    return 0;
}