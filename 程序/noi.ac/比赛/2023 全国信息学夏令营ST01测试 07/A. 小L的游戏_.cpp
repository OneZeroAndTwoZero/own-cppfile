#include<bits/stdc++.h>
using namespace std;

int t;
long long hp1,hp2,atk1,atk2;

long long qk(){
    long long hui1 = 0,hui2 = 0;
    hui1 = sqrt(hp1 * 2LL);
    hui1 -= 100;
    hui1 = max(0LL,hui1);
    for(;;hui1 ++){
        if(hui1 * (hui1 + 1) >= hp1 * 2)
            break;
    }
    hui2 = sqrt((hp1 + hp2) * 2LL);
    hui2 -= 100;
    hui2 = max(hui1,hui2);
    for(;;hui2 ++){
        if(hui2 * (hui2 + 1) - hui1 * (hui1 + 1) >= hp2 * 2)
            break;
    }
    long long res = hui1 * atk1 + hui2 * atk2;
    return res;
}

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d",&t);
    while(t --){
        scanf("%lld %lld %lld %lld",&hp1,&hp2,&atk1,&atk2);
        long long ans1,ans2;
        ans1 = qk();
        swap(hp1,hp2);
        swap(atk1,atk2);
        ans2 = qk();
        printf("%lld\n",min(ans1,ans2));
    }

	return 0;
}
