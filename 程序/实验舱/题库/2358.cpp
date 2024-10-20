#include<bits/stdc++.h>
using namespace std;

struct g{
	int x,h;
};

g a[100005];

bool cmp(g a,g b){
	return a.x - a.h > b.x - b.h;
}

int main(){
	long long n,m;
	cin >> n >> m;
	long long he = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i].x >> a[i].h;
		he += a[i].x;
	}
	sort(a,a + n,cmp);
	int ans = 0;
	bool p = 1;
	for(int i = 0;i < n;i++){
		if(he <= m){
		    p = 0;
			break;
		}
		he -= a[i].x - a[i].h;
		ans ++;
	}
	if(p){
		cout << -1 << endl;
	}else{
		cout << ans << endl;
	}

	return 0;
}

