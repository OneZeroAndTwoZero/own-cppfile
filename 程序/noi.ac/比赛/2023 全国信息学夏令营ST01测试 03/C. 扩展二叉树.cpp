#include<bits/stdc++.h>
using namespace std;

struct node{
    char data;
    int l,r;
};

int pos = 0;
string a;
node tree[1005];

int build(string s){
    if(s == "." || s == "") return -1;

    int p = pos ++;
    char root = s[0];
    tree[p].data = root;
    int i = 1;
    int cnt2 = 0,cnt0 = 0;
    string t1 = "",t2 = "";
    int n = s.size();

    for(;i < n;i ++){
        t1 = t1 + s[i];
        if(s[i] == '.'){
            cnt0 ++;
        }else{
            cnt2 ++;
        }
        if(cnt2 + 1 == cnt0) break;
    }
    i ++;
    for(;i < n;i ++){
        t2 = t2 + s[i];
    }

    tree[p].l = build(t1);
    tree[p].r = build(t2);
    return p;
}

void mid(int x){
    if(x == -1) return;
    mid(tree[x].l);
    printf("%c",tree[x].data);
    mid(tree[x].r);
}

void las(int x){
    if(x == -1) return;
    las(tree[x].l);
    las(tree[x].r);
    printf("%c",tree[x].data);
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    cin >> a;
    int s = build(a);
    mid(s);
    printf("\n");
    las(s);
    printf("\n");

	return 0;
}
