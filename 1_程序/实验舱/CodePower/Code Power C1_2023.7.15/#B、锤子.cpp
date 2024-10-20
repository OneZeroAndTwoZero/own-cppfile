#include<bits/stdc++.h>
using namespace std;

int x,y,z,ans = 0;

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("D:\\code\\data.in","r",stdin);
//    freopen("D:\\code\\data.out","w",stdout);
//#endif

	scanf("%d %d %d",&x,&y,&z);
	if(x * y < 0){
		ans = abs(x);
	}else if((z * y > 0 && abs(z) > abs(y)) && abs(x) > abs(y)){
		printf("-1\n");
		return 0;
	}else if(abs(x) < abs(y)){
		ans = abs(x);
	}else if(z * x > 0){
		ans = abs(x);
	}else{
		ans = 2 * abs(z) + abs(x);
	}
	printf("%d\n",ans);

	return 0;
}

