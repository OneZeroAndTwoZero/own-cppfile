#include<bits/stdc++.h>
using namespace std;

struct ball{
	int xi,hi;
};

int n,ans;
ball a[100005];

bool cmp(ball k,ball b){
	if(k.hi == b.hi) return k.xi < b.xi;
	if(k.hi < b.hi && k.xi <= b.xi || k.hi > b.hi && k.xi >= b.xi) return 0;
	return 1;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i].xi,&a[i].hi);
	}
	for(int i = 0;i < 10;i++) sort(a,a + n,cmp);
//	for(int i = 0;i < n;i++){
//		cout << a[i].xi << "[][]" << a[i].hi << endl;
//	}
	ans = 1;
	for(int i = 0;i < n - 1;i++){
		if(abs(a[i + 1].hi - a[i].hi) != 1 || a[i + 1].hi > a[i].hi && a[i + 1].xi >= a[i].xi || a[i + 1].hi < a[i].hi && a[i + 1].xi <= a[i].xi){
			ans ++;
		}
	}
	cout << ans << endl;

	return 0;
}

