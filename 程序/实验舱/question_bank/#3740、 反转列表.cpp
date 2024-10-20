#include<bits/stdc++.h>
using namespace std;

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
    
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    reverse(a.begin(),a.end());
    putout();

    return 0;
}
