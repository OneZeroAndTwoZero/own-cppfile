#include<bits/stdc++.h>
using namespace std;

long long m;
char s[3000006];

long long chufa(){
    long long res = 0;
    for(int i = 0;i < strlen(s);i ++){
        res = res * 10 + (s[i] - '0');
        res %= m;
    }
    return res % m;
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%s %lld",&s,&m);
    printf("%lld\n",chufa());

	return 0;
}