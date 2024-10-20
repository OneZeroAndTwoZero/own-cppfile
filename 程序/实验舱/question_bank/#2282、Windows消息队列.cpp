#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

struct node{
    string name;
    int imp,id;
    bool operator < (const node &a) const{
        if(imp != a.imp) return imp > a.imp;
        return id < a.id;
    }
};

int n,t;
string op,mess;
priority_queue<node> q;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    while(n --){
        cin >> op;
        if(op == "GET"){
            if(!q.size()){
                cout << "EMPTY QUEUE!\n";
            }else{
                cout << q.top().name << "\n";
                q.pop();
            }
        }else{
            cin >> mess >> t;
            q.push({mess,t,n});
        }
    }

    return 0;
}