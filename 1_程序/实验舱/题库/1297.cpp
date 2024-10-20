#include<bits/stdc++.h>
using namespace std;

int cd[105] = {0};

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		int max_ = -1,min_ = 1000;
		int tem;
		for(int j = 0;j < m;j++){
			cin >> tem;
			max_ = max(tem,max_),min_ = min(tem,min_);
		}
		cd[i] = max_ - min_;
	}
	int zq = 1000;
	for(int i = 0;i < n;i++){
		zq = min(cd[i],zq);
	}
	for(int i = 0;i < n;i++){
		if(zq == cd[i]){
			cout << i + 1 << endl;
			return 0;
		}
	}

	return 0;
}

