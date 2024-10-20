#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000006];
int l[1000005],r[1000006];
stack<int> s;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 1;i <= n;i ++){
        r[i] = n + 1;
        while(s.size() && a[s.top()] < a[i]){
            r[s.top()]  = i;
            s.pop();
        }
        s.push(i);
    }
    while(s.size()) s.pop();
    for(int i = n;i > 0;i --){
        while(s.size() && a[s.top()] < a[i]){
            l[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    for(int i = 1;i <= n;i ++){
        printf("%d %d\n",l[i],r[i]);
    }

	return 0;
}