#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int n,s1,s2,pos;
int a[3 * __len(5)];

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
    s2 = 1;
    while(s1 < n && s2 < n && pos < n){
        if(a[(s1 + pos) % n] == a[(s2 + pos) % n]){
            pos ++;
        }else{
            if(a[(s1 + pos) % n] > a[(s2 + pos) % n]) s1 = s1 + pos + 1;
            else s2 = s2 + pos + 1;
            pos = 0;
            if(s1 == s2) s1 ++;
        }
    }
    s1 = min(s1,s2);
    for(int i = s1;i - s1 < n;i ++){
        printf("%d%c",a[i % n]," \n"[i - s1 == n - 1]);
    }

    return 0;
}