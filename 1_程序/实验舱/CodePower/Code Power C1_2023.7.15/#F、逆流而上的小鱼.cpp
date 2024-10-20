#include<bits/stdc++.h>
using namespace std;

int t;
double v = 10,s,x,now = 0;
int p = 0;

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	scanf("%d",&t);
	while(t --){
		v = 10,now = 0,p = 0;
		scanf("%lf %lf",&s,&x);
		for(int i = 0;i < 100000;i ++){
			if(p > 1){
				printf("y\n");
				break;
			}
			if(now >= s - x && now <= s + x && i != 0) p ++;
			now += v;
			v *= 0.9;
		}
		if(p <= 1) printf("n\n");
	}

	return 0;
}

