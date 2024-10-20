#include<bits/stdc++.h>
using namespace std;

stack<int> a,min_;
int n,t;
string op;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    cin >> n;
    while(n --){
        cin >> op;
        if(op == "push"){
            cin >> t;
            a.push(t);
            if(min_.size()){
                min_.push(min(min_.top(),t));
            }else{
                min_.push(t);
            }
        }else if(op == "pop"){
            if(a.size()){
                a.pop();
                min_.pop();
            }
        }else{
            if(min_.size()){
                printf("%d\n",min_.top());
            }else{
                printf("%d\n",-1);
            }
        }
    }

	return 0;
}
