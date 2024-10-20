#include<bits/stdc++.h>
using namespace std;

long long a,b,c;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%lld %lld %lld",&a,&b,&c);
    if(a * a > b * c){
        printf("Alice\n");
    }else{
        printf("Bob\n");
    }

	return 0;
}