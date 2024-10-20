#include<bits/stdc++.h>
using namespace std;

int h[100005] = {0},l[100005] = {0};

int main(){
	long long n,m;
	cin >> n >> m;
	long long sh = n,sl = n;
	long long ans = n * n;
	for(long long i = 0;i < m;i++){
		long long x,y;
		cin >> x >> y;
		x --,y --;
		if(!h[x]){
			h[x] = 1;
			ans -= sl;
			sh --;
		}
		if(!l[y]){
			l[y] = 1;
			ans -= sh;
			sl --;
		}
		cout << ans << endl;
	}

	return 0;
}

