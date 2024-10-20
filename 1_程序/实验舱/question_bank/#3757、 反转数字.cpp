#include<bits/stdc++.h>
using namespace std;

string s;
vector<int> a;

void putout(){
    printf("[");
    int len = a.size();
    for(int i = 0;i < len;i ++){
        if(i) printf(", ");
        printf("%d",a[i]);
    }
    printf("]");
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> s;
    int len = s.size();
    for(int i = 0;i < len;i ++){
        a.push_back(s[i] ^ 48);
    }
    reverse(a.begin(),a.end());
    putout();

    return 0;
}
