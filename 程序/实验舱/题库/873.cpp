#include<bits/stdc++.h>
using namespace std;

int d[1000005] = {0};

int main(){
	int n,m;
	cin >>n >> m;
	for(int i = 0;i < m;i++){
		int t;
		cin >> t;
		d[t + 1] --;
	}
	int max_ = -1,max_n,now = m;
	for(int i = 0;i < 1000002;i++){
		now += d[i];
		int q = i * min(now,n);
		if(q > max_){
			max_n = i;
			max_ = q;
		}
	}
	cout << max_n << " " << max_ << endl;

	return 0;
}

