#include<bits/stdc++.h>
using namespace std;

struct node{
    int l,r,val;
};

int n,num = 0;
string s1,s2;
char val[1005];
int l[1005],r[1005];

void bfs(){
    queue<node> q;
    q.push({0,n - 1,0});
    while(q.size()){
        node tem = q.front();
        q.pop();
        int pos = s1.find(s2[tem.val],tem.l);
        val[tem.val + 1] = s2[tem.val];
        if(pos != tem.l){
            ++ num;
            l[tem.val + 1] = num + 1;
            q.push({tem.l,pos - 1,num});
        }
        if(pos != tem.r){
            ++ num;
            r[tem.val + 1] = num + 1; 
            q.push({pos + 1,tem.r,num});
        }
    }
}

void erg(int u){
    if(u == 0) return;
    cout << val[u];
    erg(l[u]);
    erg(r[u]);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> s1 >> s2;
    n = s1.size();
    bfs();
    erg(1);

	return 0;
}