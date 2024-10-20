#include<bits/stdc++.h>
using namespace std;

int n;
int t[200005] = {0};
stack<int> a;

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&t[i]);
    }
    for(int i = 0;i < n;i ++){
        if(!a.size() || a.top() < t[i]){
            a.push(t[i]);
        }else{
            while(a.size() && a.top() > t[i]){
                printf("%d ",a.top());
                a.pop();
            }
            a.push(t[i]);
        }
    }
    while(a.size()){
        printf("%d ",a.top());
        a.pop();
    }

	return 0;
}