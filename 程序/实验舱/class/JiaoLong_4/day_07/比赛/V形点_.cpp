#include<bits/stdc++.h>
using namespace std;

struct dian{
	int x;
	int y;
};

int n;
long long ans = 0;
dian a[10005];
unordered_map<int,int> di;

int d(int i,int j){
	int re = pow(abs(a[i].x - a[j].x),2) + pow(abs(a[i].y - a[j].y),2);
	return re;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i].x);
	}
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i].y);
	}
	for(int i = 0;i < n;i++){
		for(int j = i + 1;j < n;j++){
			di[d(i,j)] ++;
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = i + 1;j < n;j ++){
			ans += di[d(i,j)] - 1;
		}
	}
	printf("%lld\n",ans);

	return 0;
}

