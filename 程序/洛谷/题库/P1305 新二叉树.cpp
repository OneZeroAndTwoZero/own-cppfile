#include<bits/stdc++.h>
using namespace std;

struct node{
    char ch;
    char sl,sr;
    int l,r;
};

node a[1005];
int n;
string s;
map<char,int> zhao;

void cz(int x){
    if(x == -1) return;
    cout << a[x].ch;
    cz(a[x].l);
    cz(a[x].r);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    zhao['*'] = -1;
    for(int i = 0;i < n;i ++){
        cin >> s;
        a[i].ch = s[0];
        a[i].sl = s[1];
        a[i].sr = s[2];
        zhao[s[0]] = i;
    }
    for(int i = 0;i < n;i ++){
        a[i].l = zhao[a[i].sl];
        a[i].r = zhao[a[i].sr];
    }
    cz(0);

	return 0;
}
