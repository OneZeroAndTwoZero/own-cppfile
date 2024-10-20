#include<bits/stdc++.h>
using namespace std;

int n,k,ans = 0;
int a[1000006],b[1000006],c[1000006];
unordered_map<int,int> cnt;

int operate(int x){
    int res = 0;
    for(int i = 0;i < k;i ++){
        if(a[i] == b[i + x]) res ++;
    }
    return res;
}

int main(){
    scanf("%d %d",&n,&k);
    for(int i = 0;i < k;i ++){
        scanf("%d",&a[i]);
        a[i + k] = a[i];
        cnt[a[i]] ++;
    }
    for(int i = 0;i < k;i ++){
        scanf("%d",&b[i]);
        b[i + k] = b[i];
        c[n - i - 1] = b[i];
        c[n - i - 1 + k] = b[i];
        cnt[b[i]] ++;
    }
    for(int i = 0;i < k;i ++){
        ans = max(ans,operate(i));
    }
    swap(b,c);
    for(int i = 0;i < k;i ++){
        ans = max(ans,operate(i));
    }
    for(int i = 1;i <= n;i ++){
        if(cnt[i] == 0) ans ++;
    }
    printf("%d\n",ans);

    return 0;
}
