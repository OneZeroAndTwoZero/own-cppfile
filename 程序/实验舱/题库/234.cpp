#include<bits/stdc++.h>
using namespace std;

bool su(int a){
	if(a == 2) return 1;
	if(a < 2 || a % 2 == 0) return 0;
	for(int i = 2;i * i <= a;i++){
		if(a % i == 0) return 0;
	}
	return 1;
}

int max_shu(int a){
	int max = -1;
	for(int i = 1;i <= a;i++){
		if(a % i == 0){
			if(su(i)) max = i;
		}
	}
	return max;
}

int main(){
	int m,n;
	cin >> m >> n;
	for(int i = m;i <= n;i++){
		if(i != m){
			cout << ",";
		}
		cout << max_shu(i);
	}

	return 0;
}

