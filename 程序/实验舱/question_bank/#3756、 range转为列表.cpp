#include<bits/stdc++.h>
using namespace std;

vector<int> a;
int s,t;

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
    
    scanf("%d %d",&s,&t);
    for(int i = s + 1;i < t;i ++){
        a.push_back(i);
    }
    putout();

    return 0;
}
