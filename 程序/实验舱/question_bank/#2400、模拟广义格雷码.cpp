#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<long long> a,b;
long long f[15];

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d %d",&n,&m);
    f[0] = 1;
    for(int i = 1;i <= n;i ++){
        f[i] = f[i - 1] * 10;
    }
    for(int i = 0;i < m;i ++){
        a.push_back(i);
    }
    for(int i = 1;i < n;i ++){
        int st = 0,cur = 1;
        for(int j = 0;j < m;j ++){
            for(int k = st;k >= 0 && k < a.size();k += cur){
                b.push_back(j * f[i] + a[k]);
            }
            st = a.size() - 1 - st,cur *= -1;
        }
        swap(a,b);
        b.clear();
    }
    for(int i = 0;i < a.size();i ++){
        if(n == 1) printf("%01lld\n",a[i]);
        else if(n == 2) printf("%02lld\n",a[i]);
        else if(n == 3) printf("%03lld\n",a[i]);
        else if(n == 4) printf("%04lld\n",a[i]);
        else if(n == 5) printf("%05lld\n",a[i]);
        else if(n == 6) printf("%06lld\n",a[i]);
        else if(n == 7) printf("%07lld\n",a[i]);
        else if(n == 8) printf("%08lld\n",a[i]);
        else if(n == 9) printf("%09lld\n",a[i]);
        else if(n == 10) printf("%010lld\n",a[i]);
        else if(n == 11) printf("%011lld\n",a[i]);
        else if(n == 12) printf("%012lld\n",a[i]);
    }

    return 0;
}