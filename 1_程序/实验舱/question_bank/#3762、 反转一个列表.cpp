#include<bits/stdc++.h>
using namespace std;

int n,k = 1;
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

void readin(){
    scanf("[");
    int t;
    char tem;
    scanf("%d",&t);
    a.push_back(t);
    while(~scanf("%c",&tem)){
        if(tem == ']') break;
        scanf("%d",&t);
        a.push_back(t);
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
    
    readin();
    reverse(a.begin(),a.end());
    putout();

    return 0;
}
