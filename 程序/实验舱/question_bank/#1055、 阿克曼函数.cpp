#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int m,n;

int ACK(int m,int n){
    if(m == 0)
        return 1 + n;
    if(n == 0)
        return ACK(m - 1,1);
    return ACK(m - 1,ACK(m,n - 1));
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n;
    cout << ACK(m,n) << "\n";

    return 0;
}