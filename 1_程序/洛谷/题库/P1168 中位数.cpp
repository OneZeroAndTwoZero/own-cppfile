#include<bits/stdc++.h>
using namespace std;

int n,t;
priority_queue<int> q1;
priority_queue<int,vector<int>,greater<int> > q2;

void swap(){
    q1.push(q2.top()),q2.push(q1.top());
    q1.pop(),q2.pop();
}

int operate(int x){
    while(q2.size() > (x / 2) + 1)
        q1.push(q2.top()),q2.pop();
    while(q1.size() && q2.top() < q1.top()) swap();
    return q2.top();
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t);
        q2.push(t);
        if(!(i & 1)) printf("%d\n",operate(i));
    }

	return 0;
}
