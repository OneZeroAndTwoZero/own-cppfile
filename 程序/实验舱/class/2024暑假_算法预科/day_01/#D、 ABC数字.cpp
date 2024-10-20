#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

int T;
long long a,b,c;

int getcid(long long x){
    int res = 0;
    while(x){
        res ++;
        x /= 10;
    }
    return x;
}

long long operate(long long x){
    long long cnt = 0,power = 1;
    for(int i = 0;i < 12;i ++ ,power *= 10LL){
        cnt += power;
        long long temp = (c + 1) * power - 1;
        // cout << cnt << " " << temp << "[][]\n";
        if(temp < x) continue;
        if(getcid(temp) > getcid(x)){
            cnt -= power;
            break;
        }
        cnt -= min(power,temp - x);
        break;
    }
    // cout <<x  << ";;;;" << cnt << "\n";
    return cnt;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        scanf("%lld %lld %lld",&a,&b,&c);
        b = max(b,a + 1);
        printf("%lld\n",operate(b - 1) - operate(a));
    }

    return 0;
}