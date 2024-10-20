#include<bits/stdc++.h>
using namespace std;

int k;
int a[105],b[105];
int t[105];
unordered_map<int,char> f;

void operate(){
    for(int i = 0;i <= 53;i ++){
        b[t[i]] = a[i];
    }
    for(int i = 0;i <= 53;i ++){
        a[i] = b[i];
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

    f[0] = 'S',f[1] = 'H',f[2] = 'C',f[3] = 'D',f[4] = 'J';
    scanf("%d",&k);
    for(int i = 0;i <= 53;i ++){
        scanf("%d",&t[i]);
        t[i] --;
        a[i] = b[i] = i;
    }
    while(k --){
        operate();
    }
    for(int i = 0;i <= 53;i ++){
        printf("%c%d%c",f[a[i] / 13],(a[i] % 13) + 1," \n"[i == 53]);
    }

    return 0;
}