#include<bits/stdc++.h>
using namespace std;

int t,h,g;
long long ans = 0,a[(1 << 21) + 5];
vector<int> cnt;

void __init(){
    ans = 0;
    while(cnt.size()) cnt.pop_back();
    for(int i = 0;i <= 2 * (1 << h);i ++){
        a[i] = 0;
    }
}

void f(int idx){
    // cout << idx << ";;;\n";
    if(a[2 * idx] == 0 && a[2 * idx + 1] == 0){
        a[idx] = 0;
    }else{
        if(a[2 * idx] > a[2 * idx + 1]){
            a[idx] = a[2 * idx];
            f(2 * idx);
        }else{
            a[idx] = a[2 * idx + 1];
            f(2 * idx + 1);
        }
    }
}

int dep(int idx){
    if(a[idx] == 0) return 0;
    if(a[idx * 2] > a[2 * idx + 1]){
        return 1 + dep(2 * idx);
    }else{
        return 1 + dep(2 * idx + 1);
    }
}

void operate(int d,int idx){
    if(d > g) return;
    while(d + dep(idx) - 1 > g){
        cnt.push_back(idx);
        // cout << dep(d,idx) << "[][]\n";
        f(idx);
    }
    operate(d + 1,2 * idx);
    operate(d + 1,2 * idx + 1);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&t);
    while(t --){
        scanf("%d %d",&h,&g);
        __init();
        for(int i = 1;i < (1 << h);i ++){
            scanf("%lld",&a[i]);
        }
        operate(1,1);
        for(int i = 1;i < (1 << g);i ++){
            // cout << i << "[]" << a[i] << "\n";
            ans += a[i];
        }
        printf("%lld\n",ans);
        for(int i = 0;i < cnt.size();i ++){
            printf("%d%c",cnt[i]," \n"[i == cnt.size() - 1]);
        }
    }

	return 0;
}