#include<bits/stdc++.h>
using namespace std;

int t;
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
    a.push_back(3);
    a.push_back(5);
    scanf("%d",&t);
    a.push_back(t);
    putout();

    return 0;
}
