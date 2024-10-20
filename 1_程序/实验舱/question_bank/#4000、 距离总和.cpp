#include<bits/stdc++.h>
using namespace std;

int n;
unsigned long long a[1000006], ans = 0;
int cnt[114][3];

void read(__int128 &x){
    // read a __int128 variable
    char c; bool f = 0;
    while(((c = getchar()) < '0' || c > '9') && c != '-');
    if(c == '-'){f = 1; c = getchar();}
    x = c - '0';
    while((c = getchar()) >= '0' && c <= '9')x = x * 10 + c - '0';
    if(f) x = -x;
}

void write(__int128 x){
    // print a __int128 variable
    if(x < 0){putchar('-'); x = -x;}
    if(x > 9)write(x / 10);
    putchar(x % 10 + '0');
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i ++){
        cin >> a[i];
        for (int j = 0; j < 65; j ++){
            cnt[j][(a[i] & 1)] ++;
            a[i] /= 2;
        }
    }
    for (int i = 0; i < 65; i ++){
        ans += 1LL * cnt[i][0] * cnt[i][1];
    }
    cout << ans << "\n";

    return 0;
}