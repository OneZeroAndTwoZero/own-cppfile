#include<bits/stdc++.h>
using namespace std;

int n,op,od;
stack<int> a,m;

int main(){
#ifndef ONLINE_JUDGE
    freopen("D:\\code\\data.in","r",stdin);
    freopen("D:\\code\\data.out","w",stdout);
#endif

    scanf("%d",&n);
    while(n --){
        scanf("%d",&op);
        if(op == 0){
            scanf("%d",&od);
            a.push(od);
            if(m.empty()) m.push(od);
            else m.push(max(od,m.top()));
        }else if(op == 1){
            if(!a.empty()){
                a.pop();
                m.pop();
            }
        }else{
            if(a.empty()) printf("%d\n",0);
            else printf("%d\n",m.top());
        }
    }

    return 0;
}