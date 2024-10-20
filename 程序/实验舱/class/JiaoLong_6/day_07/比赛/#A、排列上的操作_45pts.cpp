#include<bits/stdc++.h>
using namespace std;

int n,m,cnt = 0;
int op,l,r,k;
int a[200005];
int t[200005];
int tem[200005];

void reverse(int l,int r){
    for(int i = l;i <= r;i ++){
        tem[r - (i - l)] = a[i];
    }
    for(int i = l;i <= r;i ++){
        a[i] = tem[i];
    }
}

void move_left(int l,int r,int k){
    for(int i = l + k;i - k <= r;i ++){
        tem[i - k] = a[l + (i - l) % (r - l + 1)];
    }
    for(int i = l;i <= r;i ++){
        a[i] = tem[i];
        // cout << a[i] << " ";
    }
    // cout << "\n";
}

void move_right(int l,int r,int k){
    for(int i = l;i <= r;i ++){
        tem[l + (i - l + k) % (r - l + 1)] = a[i];
        // cout << l + (i - l + k) % (r - l + 1) << " " << i << ";;\n";
    }
    for(int i = l;i <= r;i ++){
        a[i] = tem[i];
        // cout << a[i] << " ";
    }
}

void guibing_sort(int l,int r){
    if(l >= r) return;
    int mid = (l + r) >> 1;
    guibing_sort(l,mid);
    guibing_sort(mid + 1,r);
    int pos = l,pos1 = l,pos2 = mid + 1;
    while(pos1 <= mid && pos2 <= r){
        if(t[pos2] < t[pos1]){
            cnt += (mid - pos1 + 1);
            tem[pos ++] = t[pos2 ++];
        }else{
            tem[pos ++] = t[pos1 ++];
        }
    }
    while(pos1 <= mid){
        tem[pos ++] = t[pos1 ++];
        // cnt += (r - mid);
    }
    while(pos2 <= r){
        tem[pos ++] = t[pos2 ++];
    }
    for(int i = l;i <= r;i ++){
        t[i] = tem[i];
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
    while(m --){
        scanf("%d",&op);
        // cout << op << ";;;;\n";
        if(op == 1){
            scanf("%d %d",&l,&r);
            swap(a[l],a[r]);
        }else if(op == 2){
            scanf("%d %d",&l,&r);
            reverse(l,r);
        }else if(op == 3){
            scanf("%d %d %d",&l,&r,&k);
            k %= (r - l + 1);
            move_left(l,r,k);
        }else{
            scanf("%d %d %d",&l,&r,&k);
            k %= (r - l + 1);
            // cout << "[]\n";
            move_right(l,r,k);
        }
        cnt = 0;
        for(int i = 1;i <= n;i ++){
            // printf("%d ",a[i]);
            t[i] = a[i];
        }
        // printf("\n");
        guibing_sort(1,n);
        printf("%d\n",(cnt & 1));
    }

	return 0;
}