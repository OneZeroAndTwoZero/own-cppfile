#include<bits/stdc++.h>
using namespace std;

int d,k,ans = 0;

int c(int a,int b){
	int res = 1;
	while(b --){
		res *= a;
	}
	return res;
} 

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

    scanf("%d %d",&d,&k);
    ans = c(2,d - 1);
    while(k){
        if(k % 2 == 0){
            d --;
            ans += c(2,d - 1);
        }
        k /= 2;
    }
    printf("%d\n",ans);

	return 0;
}
