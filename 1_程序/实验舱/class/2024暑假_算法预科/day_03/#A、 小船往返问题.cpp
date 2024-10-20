#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int q,r;
double s,v1,v2,t1,t2;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> q;
    while(q --){
        cin >> s >> v1 >> v2 >> r;
        t1 = s / (v1 - v2) + s / (v1 + v2);
        t2 = 2 * s / v1;
        cout << fixed << setprecision(r) << (t1 - t2) << "\n"; 
    }

    return 0;
}