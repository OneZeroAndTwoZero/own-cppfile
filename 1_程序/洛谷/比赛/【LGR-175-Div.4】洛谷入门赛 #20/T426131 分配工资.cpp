#include<bits/stdc++.h>
using namespace std;

int n,a;
double t,val,cnt,sum;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %lf",&n,&val);
    for(int i = 0;i < n;i ++){
        scanf("%d %lf",&a,&t);
        sum += t;
        if(a == 1) cnt += t;
    }
    // cout << cnt << " " << sum << "\n";
    printf("%.3lf\n",val * (cnt / sum));

    return 0;
}