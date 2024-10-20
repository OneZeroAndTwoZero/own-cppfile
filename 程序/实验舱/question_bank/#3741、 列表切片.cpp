#include<bits/stdc++.h>
using namespace std;

string s = "programiz";
vector<char> a;

void putout(){
    printf("[");
    int len = a.size();
    for(int i = 0;i < len;i ++){
        if(i) printf(", ");
        printf("\'%c\'",a[i]);
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
    
    int len = s.size();
    for(int i = 1;i < len - 1;i ++){
        a.push_back(s[i]);
    }
    putout();

    return 0;
}
