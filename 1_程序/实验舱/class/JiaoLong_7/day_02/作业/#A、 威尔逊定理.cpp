#include<bits/stdc++.h>
using namespace std;

int T,n;

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
		scanf("%d",&n);
		bool p = 1;
		for(int i = 2;i <= n / i;i ++){
			if(n % i) continue;
			p = 0;
			break;
		}
		if(p){
			printf("%d\n",n - 1);
		}else if(n != 4){
			printf("0\n");
		}else{
			printf("2\n");
		}
	}

    return 0;
}
