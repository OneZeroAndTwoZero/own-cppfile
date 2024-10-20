#include<bits/stdc++.h>
using namespace std;

struct thing{
	int u,v;
};

thing a[1005];

bool cmp(thing l,thing b){
	return l.u > b.u;
}

int main(){
	int m,n;
	cin >> m >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i].v >> a[i].u;
	}
	sort(a,a + n,cmp);
	int ans = 0;
	int tov = 0;
	for(int i = 0;i < n;i++){
		if(tov + a[i].v <= m){
			tov += a[i].v;
			ans += a[i].u * a[i].v;
		}else{
			ans += a[i].u * (m - tov);
			break;
		}
	}
	cout << ans <<endl;

	return 0;
}

