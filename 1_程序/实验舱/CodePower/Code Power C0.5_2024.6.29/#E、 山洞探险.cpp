#include<bits/stdc++.h>
using namespace std;

int n, a, b, c;
int p[100005];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d %d", &a, &b, &c);
    if (b > c) swap(b, c);
    scanf("%d", &n);
    for (int i = 0; i < n; i ++){
        scanf("%d", &p[i]);
    }
    sort(p, p + n);
    int pos = lower_bound(p, p + n, a) - p;
    if (a == b || a == c){
        printf("0\n");
        return 0;
    }
    if (a < b){
        printf("%d\n", lower_bound(p, p + n, b) - p);
    }else if(b < a && a < c){
        printf("%d\n", lower_bound(p, p + n, c) - upper_bound(p, p + n, b));
    }else{
        printf("%d\n", p + n - upper_bound(p, p + n, c));
    }

    return 0;
}