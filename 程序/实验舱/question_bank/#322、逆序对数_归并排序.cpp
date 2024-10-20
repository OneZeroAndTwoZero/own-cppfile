#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;

int n;
long long ans = 0;
int a[1000006];
int tem[1000006];

void Merge_sort(int l,int r){
    if(l >= r) return;
    int mid = (l + r) >> 1;
    Merge_sort(l,mid);
    Merge_sort(mid + 1,r);
    int pos1 = l,pos2 = mid + 1,pos = 0;
    while(pos1 <= mid || pos2 <= r){
        if(pos1 > mid || (pos2 <= r && a[pos2] < a[pos1])){
            ans += (mid - pos1 + 1); // update ans
            tem[pos] = a[pos2 ++];
        }else{
            tem[pos] = a[pos1 ++];
        }
        pos ++;
    }
    for(int i = 0;i < pos;i++){
        a[l + i] = tem[i];
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

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    Merge_sort(0,n - 1);
    printf("%lld\n",ans);

    return 0;
}