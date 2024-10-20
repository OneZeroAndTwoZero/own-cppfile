#include<bits/stdc++.h>
using namespace std;

int l[100005],r[100005]; 

int main(){
	memset(r,0x3f,sizeof(r));
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int x,y,fx;
		cin >> x >> y >> fx;
		if(fx == 0){
			if(x > l[y]) l[y] = x;
		}else{
			if(x < r[y]) r[y] = x;
		}
	}
	int ans = 0;
	for(int i = 0;i < 100004;i++){
		if(l[i] > r[i]) ans++;
	}
	cout << ans << endl;

	return 0;
}


