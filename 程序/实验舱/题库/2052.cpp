#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;
	cin >> n >> m;
	long long max_ = -1,max_i;
	for(int i = 0;i < n;i++){
		long long sum = 0;
		for(int j = 0;j < m;j++){
			long long tem;
			cin >> tem;
			if(tem % 8 == 0) sum += tem;
		}
		if(sum > max_){
			max_ = sum;
			max_i = i + 1;
		}
	}
	cout << max_i << endl;

	return 0;
}

