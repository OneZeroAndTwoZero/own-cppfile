#include<bits/stdc++.h>
using namespace std;

int n;
string a,b,c,d;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin >> a >> b >> c >> d;
    for(int i = 0;i < n;i ++){
        if(a[i] > c[i]){
            swap(a[i],c[i]);
            swap(b[i],d[i]);
        }else if(a[i] == c[i]){
            b[i] = min(b[i],d[i]);
        }
    }
    cout << b << "\n";

    return 0;
}