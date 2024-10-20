#include<bits/stdc++.h>
using namespace std;

int t;
vector<int> a;

void putout(vector<int> &a,int s,int t){
    printf("[");
    for(int i = s;i <= t;i ++){
        if(i != s) printf(", ");
        printf("%d",a[i]);
    }
    printf("]\n");
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    while(~scanf("%d",&t)){
        a.push_back(t);
    }
    printf("%d\n%d\n",a[0],a[13]);
    putout(a,7,13);
    reverse(a.begin(),a.end());
    putout(a,0,13);

    return 0;
}