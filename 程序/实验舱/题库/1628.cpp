#include<bits/stdc++.h>
using namespace std;

struct quan{
	int q;
	int ti;
	bool y;
}a[200005];

int main(){
	int n;
	cin >> n;
	int k = 0;
	int ans = 0;
	for(int i = 0;i < n;i++){
		int g,p,t;
		cin >> g >> p >> t;
		if(g == 0){
		    a[k].q = p;
			a[k].y = 1;
			a[k ++].ti = t;
			ans += p;
		}else{
			bool tem = 0;
			for(int i = 0;i < k;i++){
				if(a[i].y && t - a[i].ti <= 45 && a[i].q >= p){
					a[i].y = 0;
					tem = 1;
					break;
				}
			}
			if(!tem){
				ans += p;
			}
		}
	}
	cout << ans << endl;

	return 0;
}

