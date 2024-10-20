#include<bits/stdc++.h>
using namespace std;

int n;
int a[10005];

int operate(int idx){
    for(int i = idx + 1;i - idx < n;i ++){
        if(a[i % n] > a[idx]) return a[i % n];
    }
    return -1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < n;i ++){
        printf("%d ",operate(i));
    }

	return 0;
}