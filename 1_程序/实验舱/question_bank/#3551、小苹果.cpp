#include<bits/stdc++.h>
using namespace std;

long long n;
int t,tn;
bool p = 0;

int main(){
    freopen("apple.in","r",stdin);
    freopen("apple.out","w",stdout);

    scanf("%lld",&n);
    while(n > 0){
        t ++;
        if(!p && (n % 3 == 1)){
			p = 1;
			tn = t;
		}
        n = n - ((n + 2) / 3);
    }
    printf("%d %d\n",t,tn);

    return 0;
}