#include<bits/stdc++.h>
using namespace std;

int sl[3] = {0},jg[3] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < 3;i++){
		cin >> sl[i] >> jg[i];
	}
	int min_ = 100000000;
	for(int i = 0;i < 3;i++){
		int bao = ceil((double)n / sl[i]);
		int q = bao * jg[i];
		min_ = min(q,min_);
	}
	cout << min_ << endl;

	return 0;
}

