#include<bits/stdc++.h>
using namespace std;

struct node{
    char val;
    vector<int> son;
};

string s;
int pos = 1;
node tree[100005];

void dfs(int x,int p){
    if(x == s.size()) return;
    for(auto && i : tree[p].son)
        if(tree[i].val == s[x]){
            dfs(x + 1,i);
            return;
        }
    tree[pos].val = s[x];
    tree[p].son.push_back(pos);
    dfs(x + 1,pos ++);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    while(cin >> s) dfs(0,0);
    cout << pos << "\n";

	return 0;
}
