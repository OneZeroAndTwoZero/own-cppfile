#include<bits/stdc++.h>
using namespace std;

struct thing{
	int xi,yi,ti;
	bool operator < (const thing &c)const{
		return ti > c.ti;
	}
};

int g,n,x,y,t,ans = 0;
thing a[100005];

int main(){
	scanf("%d %d",&g,&n);
	for(int i = 0;i < g;i++){
		scanf("%d %d %d",&a[i].xi,&a[i].yi,&a[i].ti);
	}
	sort(a,a + n);
	for(int i = 0;i < n;i++){
		scanf("%d %d %d",&x,&y,&t);
		bool ok = 1;
		for(int j = 0;j < g;j++){
			if(abs(x - a[j].xi) + abs(y - a[j].yi) <= a[j].ti - t){
				ok = 0;
				break;
			}
		}
		if(ok) ans ++;
	}
	printf("%d\n",ans);

	return 0;
}

