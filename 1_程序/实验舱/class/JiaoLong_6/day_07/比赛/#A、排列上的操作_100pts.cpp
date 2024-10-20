#include<bits/stdc++.h>
using namespace std;

int n,m,cnt = 0;
int a[200005],tem[200005];
int op,l,r,k;

void guibing_sort(int l,int r){
    if(l >= r) return;
    int mid = (l + r) >> 1;
    guibing_sort(l,mid);
    guibing_sort(mid + 1,r);
    int pos = l,pos1 = l,pos2 = mid + 1;
    while(pos1 <= mid && pos2 <= r){
        if(a[pos2] < a[pos1]){
            cnt += (mid - pos1 + 1);
            tem[pos ++] = a[pos2 ++];
        }else{
            tem[pos ++] = a[pos1 ++];
        }
    }
    while(pos1 <= mid){
        tem[pos ++] = a[pos1 ++];
        // cnt += (r - mid);
    }
    while(pos2 <= r){
        tem[pos ++] = a[pos2 ++];
    }
    for(int i = l;i <= r;i ++){
        a[i] = tem[i];
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

    scanf("%d %d",&n,&m);
    for(int i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
    }
    guibing_sort(1,n);
    cnt &= 1;
    while(m --){
        scanf("%d %d %d",&op,&l,&r);
        if(op < 2){
            if(l != r) cnt = !cnt;
        }else if(op == 2){
            if(l != r && ((r - l + 1) / 2) & 1) cnt = !cnt;
        }else{
            scanf("%d",&k);
            if((k * (r - l)) & 1) cnt = ! cnt;
        }
        printf("%d\n",cnt);
    }

	return 0;
}