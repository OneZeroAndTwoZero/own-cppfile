#include<bits/stdc++.h>
using namespace std;

int n,q,t;
string s[1005];

void operate(int x,int y,int num){
    if(s[x] != "?" && s[y] != "?"){
        cout << "middle of " << s[x] << " and " << s[y] << "\n";
    }else if(s[x] != "?"){
        for(int i = 0;i < num;i ++){
            cout << "right of ";
        }
        cout << s[x] << "\n";
    }else if(s[y] != "?"){
        for(int i = 0;i < num;i ++){
            cout << "left of ";
        }
        cout << s[y] << "\n";
    }else{
        operate(max(x - 1,1),min(n,y + 1),num + 1);
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

    cin >> n;
    for(int i = 1;i <= n;i ++){
        cin >> s[i];
    }
    cin >> q;
    while(q --){
        cin >> t;
        if(s[t] != "?") cout << s[t] << "\n";
        else operate(t,t,0);
    }

    return 0;
}