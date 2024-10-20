#include<bits/stdc++.h>
using namespace std;

struct yue{
	int z,num;
};

int t,co;
yue cnt[1000005];
long long a,b,k,ans,tem,g,pos;
bool p;

long long gcd(long long t1,long long t2){
	if(t2 == 0) return t1;
	return gcd(t2,t1 % t2);
}

bool cmp(yue c,yue d){
	return c.z > d.z;
}

int main(){
	scanf("%d",&t);
	while(t --){
		pos = 0;
		scanf("%lld %lld %lld",&a,&b,&k);
		if(k == 1){
			printf("%lld\n",gcd(a,b));
			continue;
		}
		g = gcd(a,b);
		int tg = g;
		for(int i = 2;i <= g / i && g != 1;i ++){
			p = 0;
			while(g % i == 0){
				cnt[pos].z = i;
				cnt[pos].num ++;
				g /= i;
				p = 1;
			}
			if(p) pos ++;
		}
		if(g != 1) cnt[pos].z = g,cnt[pos ++].num = 1;
		co = 0,ans = tg;
		sort(cnt,cnt + pos,cmp);
		k --;
		for(int i = 0;i < pos;i ++){
			if(k - co > cnt[i].num){
				while(cnt[i].num --){
					ans /= cnt[i].z;
				}
			}else{
				while(co ++ < k){
					ans /= cnt[i].z;
				}
			}
		}
		if(co < k){
			printf("-1\n");
		}else{
			printf("%lld\n",ans);
		}
	}

	return 0;
}

