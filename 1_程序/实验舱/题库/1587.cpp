#include<bits/stdc++.h>
using namespace std;

struct t{
	int q;
	int v;
};

t a[1005];

bool cmp(t a,t b){
	return a.q > b.q;
} 

int main(){
	int m,n;
	cin >> m >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i].q >> a[i].v;
	}
	sort(a,a + n,cmp);
	int ans = 0,tv = 0;
	for(int i = 0;i < n;i++){
		if(tv + a[i].v <= m){
			ans += a[i].q * a[i].v;
			tv += a[i].v; 
		}else{
			ans += a[i].q * (m - tv);
			break;
		}
	}
	cout << ans << endl;

	return 0;
}

