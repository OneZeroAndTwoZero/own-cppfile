#include<bits/stdc++.h>
using namespace std;

long long x = 1,y = 0;
char a[105];

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	scanf("%s",&a);
	for(int i = 0;i < strlen(a);i ++){
		if(a[i] = 'A'){
			x = 2 * x + y;
		}else{
			y = 2 * y + x;
		}
	}
	printf("%lld\n",x + y);

	return 0;
}

