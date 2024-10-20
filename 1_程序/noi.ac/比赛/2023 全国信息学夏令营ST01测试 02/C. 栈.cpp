#include<bits/stdc++.h>
using namespace std;

int n,a;
stack<int> s;

void out(){
    if(!s.size()) return;
    int num = s.top();
    s.pop();
    out();
    printf("%d\n",num);
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a);
        while(s.size() && s.top() < a){
            s.pop();
        }
        s.push(a);
    }
    out();

	return 0;
}
