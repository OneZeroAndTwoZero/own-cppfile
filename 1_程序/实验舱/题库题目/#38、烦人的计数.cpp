#include<bits/stdc++.h>
using namespace std;

int n;
int cnt[114] = {0};

void cz(int a){
    while(a){
        cnt[a % 10] ++;
        a /= 10;
    }
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        cz(i + 1);
    }
    for(int i = 0;i < 10;i ++){
        printf("%d\n",cnt[i]);
    }

	return 0;
}
