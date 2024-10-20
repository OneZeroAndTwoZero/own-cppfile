#include<bits/stdc++.h>
using namespace std;

int n,a1,a2,pos = 0;
vector<int> a;

void add(int x){
    stack<int> s;
    if(!x) s.push(0);
    else{
        while(x){
            s.push(x % 10);
            x /= 10;
        }
    }
    while(s.size()){
        a.push_back(s.top());
        s.pop();
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d",&a1,&a2,&n);
    a.push_back(a1),a.push_back(a2);
    while(a.size() < n){
        add(a[pos] * a[pos + 1]);
        pos ++;
    }
    for(int i = 0;i < n;i ++){
        printf("%d%c",a[i]," \n"[i == n - 1]);
    }

    return 0;
}