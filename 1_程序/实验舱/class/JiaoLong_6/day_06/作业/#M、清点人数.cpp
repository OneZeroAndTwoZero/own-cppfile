#include<bits/stdc++.h>
#define lowbit(x) (x & -x)
using namespace std;

int n,k;
int c[500005];
int m,p;
char op;

void add(int pos,int val){
    for(int i = pos;i <= n;i += lowbit(i)){
        c[i] += val;
    }
}

int find(int pos){
    int res = 0;
    for(int i = pos;i > 0;i -= lowbit(i)){
        res += c[i];
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> k;
    while(k --){
        cin >> op;
        if(op == 'A'){
            cin >> m;
            cout << find(m) << "\n";
        }else if(op == 'B'){
            cin >> m >> p;
            add(m,p);
        }else{
            cin >> m >> p;
            add(m,-p);
        }
    }

	return 0;
}