#include<bits/stdc++.h>
using namespace std;

int n,op,x;
queue<int> q;
multiset<int> s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    while(n --){
        scanf("%d",&op);
        if(op == 1){
            scanf("%d",&x);
            q.push(x);
        }else if(op == 2){
            if(s.size()){
                printf("%d\n",*s.begin());
                s.erase(s.begin());
            }else{
                printf("%d\n",q.front());
                q.pop();
            }
        }else{
            while(q.size()){
                s.insert(q.front());
                q.pop();
            }
        }
    }

	return 0;
}