#include<bits/stdc++.h>
using namespace std;

int n;
int a[200005] = {0},max_[200005] = {0};
stack<int> s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++) scanf("%d",&a[i]);
    for(int i = n;i > 0;i --) max_[i] = max(max_[i + 1],a[i]);
    for(int i = 1;i <= n;i ++){
        while(s.size() && s.top() >= max_[i]){
            printf("%d ",s.top());
            s.pop();
        }
        s.push(a[i]);
    }
    while(s.size()){
        printf("%d ",s.top());
        s.pop();
    }

	return 0;
}