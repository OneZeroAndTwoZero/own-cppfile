#include<bits/stdc++.h>
using namespace std;

int s;
string n,tem;

void operate(){
    tem.clear();
    bool t = 0;
    for(int i = 0;i < n.size();i ++){
        if(!t && i == n.size() - 1) continue;
        if(!t && n[i] > n[i + 1]){
            t = 1;
            continue;
        }
        tem.push_back(n[i]);
    }
    swap(n,tem);
}

void out(){
    bool p = 0;
    for(int i = 0;i < n.size();i ++){
        if(i != n.size() - 1 && !p && n[i] == '0') continue;
        p = 1;
        cout << n[i];
    }
    cout << "\n";
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    cin >> n >> s;
    while(s --) operate();
    out();

	return 0;
}