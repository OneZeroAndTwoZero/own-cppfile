#include<bits/stdc++.h>
using namespace std;

struct node{
    int ti,xi,yi;
    bool operator < (const node &a) const{
        return ti < a.ti;
    }
};

int n,m,k,q;
node a[100005];
int sum[505][505];

void __init(){
    for(int i = 0;i <= n;i ++){
        for(int j = 0;j <= m;j ++){
            sum[i][j] = 0;
        }
    }
}

bool check(int x){
    // cout << x << "[]\n";
    __init();
    for(int i = 0;i <= x;i ++){
        sum[a[i].xi][a[i].yi] = 1;
    }
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
            // cout << i << "[]" << j << "[]" << sum[i][j] << "\n";
            sum[i][j] += sum[i][j - 1] + sum[i - 1][j]
            - sum[i - 1][j - 1];
            if(i < k || j < k) continue;
            int num = sum[i][j] - sum[i - k][j] - sum[i][j - k]
            + sum[i - k][j - k];
            // cout << i << " " << j << " " << num << " \n";
            if(num == k * k) return 1;
        }
    }
    return 0;
}

int half_ans(){
    int res = -1,l = 0,r = q - 1;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid)){
            res = a[mid].ti;
            // cout << mid << " " << a[mid].ti << ";;\n";
            r = mid - 1;
        }else{
            l = mid + 1;
        }
        // cout << "\n\n";
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d %d %d %d",&n,&m,&k,&q);
    for(int i = 0;i < q;i ++){
        scanf("%d %d %d",&a[i].xi,&a[i].yi,&a[i].ti);
    }
    sort(a,a + q);
    printf("%d\n",half_ans());

	return 0;
}